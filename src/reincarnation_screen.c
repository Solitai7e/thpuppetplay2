#include "global.h"
#include "task.h"
#include "script.h"
#include "main.h"
#include "gpu_regs.h"
#include "malloc.h"
#include "dma3.h"
#include "palette.h"
#include "menu.h"
#include "menu_helpers.h"
#include "window.h"
#include "bg.h"
#include "text_window.h"
#include "text.h"
#include "scanline_effect.h"
#include "pokemon.h"
#include "overworld.h"
#include "data.h"
#include "field_weather.h"
#include "field_screen_effect.h"
#include "reincarnation.h"




static void CB2(void);
static void VBlankCB(void);

static void Task_Init(u8 TaskId);
static void Task_Main(u8 TaskId);


struct Context {
    u8 currentField;


};



enum {
    LABEL_REINCARNATING_PUPPET,
    LABEL_PARENT_PUPPETS,
    LABEL_MISC,
    FIELD_REINCARNATING_PUPPET,
    FIELD_PARENT_PUPPET0,
    FIELD_PARENT_PUPPET1,
    FIELD_MARK,
    FIELD_STONE,

    NUM_LABELS
};

struct LabelTemplate {
    u8 font;
    u8 x;     u8 y;
    u8 width; u8 height;
};

static const struct LabelTemplate sLabelTemplates[] = {
    [LABEL_REINCARNATING_PUPPET] = {FONT_NORMAL,       1,  2,  15, 2},
    [LABEL_PARENT_PUPPETS]       = {FONT_NORMAL,       1,  6,  11, 2},
    [LABEL_MISC]                 = {FONT_NORMAL,       13, 6,  4,  2},
    [FIELD_REINCARNATING_PUPPET] = {FONT_SMALL_NARROW, 4,  4,  7,  2},
    [FIELD_PARENT_PUPPET0]       = {FONT_SMALL_NARROW, 4,  8,  7,  2},
    [FIELD_PARENT_PUPPET1]       = {FONT_SMALL_NARROW, 4,  11, 7,  2},
    [FIELD_MARK]                 = {FONT_SMALL_NARROW, 14, 8,  6,  2},
    [FIELD_STONE]                = {FONT_SMALL_NARROW, 14, 11, 8,  2},
};

static const u8 *const sLabelStrings[] = {
    [LABEL_REINCARNATING_PUPPET] = (const u8 []) _("Reincarnating puppet:"),
    [LABEL_PARENT_PUPPETS]       = (const u8 []) _("Parent puppets:"),
    [LABEL_MISC]                 = (const u8 []) _("Misc:"),
    [FIELD_REINCARNATING_PUPPET] = (const u8 []) _("N/A"),
    [FIELD_PARENT_PUPPET0]       = (const u8 []) _("N/A"),
    [FIELD_PARENT_PUPPET1]       = (const u8 []) _("N/A"),
    [FIELD_MARK]                 = (const u8 []) _("Nothing"),
    [FIELD_STONE]                = (const u8 []) _("Nothing"),
};




static void CB2(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    DoScheduledBgTilemapCopiesToVram();
    UpdatePaletteFade();
}

static void VBlankCB(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}


static void FieldTask_Exit(void)
{
    SetVBlankCallback(gMain.vblankCallback);
    FadeInFromBlack();
}

static void Exit(void)
{
    ScriptContext2_Disable();
    EnableBothScriptContexts();

    FreeAllWindowBuffers();

    gFieldCallback = FieldTask_Exit;
    SetMainCallback2(CB2_ReturnToField);
}




static void Task_Init_SetUpWindows(void)
{
    InitWindows((struct WindowTemplate []) {DUMMY_WIN_TEMPLATE});


    u16 tilemapOffset = 0x40;

    for (u32 i = 0; i < NUM_LABELS; i++) {
        const struct LabelTemplate *t = sLabelTemplates + i;

        AddWindow((struct WindowTemplate []) {{
            .bg = 0,
            .tilemapLeft = t->x,     .tilemapTop = t->y,
            .width       = t->width, .height     = t->height,
            .paletteNum = 14,
            .baseBlock  = tilemapOffset
        }});

        tilemapOffset += t->width * t->height;


        AddTextPrinterParameterized2(
            i, t->font, sLabelStrings[i],
            TEXT_SKIP_DRAW, NULL, 1, 0, 2
        );

        PutWindowTilemap(i);
        CopyWindowToVram(i, COPYWIN_FULL);
    }
}




static void Task_Init(u8 taskId)
{
    struct Task *task = &gTasks[taskId];

    switch (task->data[0]) {
        case 0:
            FadeScreen(FADE_TO_BLACK, 0);

            task->data[0]++; break;

        case 1:
            if (gPaletteFade.active) break;
            CleanupOverworldWindowsAndTilemaps();

            task->data[0]++; break;

        case 2:
            SetVBlankCallback(NULL);
            ResetVramOamAndBgCntRegs();
            ClearScheduledBgCopiesToVram();
            ScanlineEffect_Stop();
            ResetPaletteFade();
            ResetSpriteData();
            FreeSpriteTileRanges();
            FreeAllSpritePalettes();

            task->data[0]++; break;

        case 3:
            DeactivateAllTextPrinters();
            Menu_LoadStdPal();

            Task_Init_SetUpWindows();

            task->data[0]++; break;

        case 4:
            SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_OBJ_ON | DISPCNT_OBJ_1D_MAP);
            ShowBg(0);

            SetVBlankCallback(VBlankCB);
            CreateTask(Task_Main, 80);


            DestroyTask(taskId); break;
    }
}

static void Task_Main(u8 taskId)
{
    struct Task *task = &gTasks[taskId];

    switch (task->data[0]) {
        case 0:
            if (!JOY_NEW(B_BUTTON)) break;
            Exit();

            DestroyTask(taskId);
            break;
    }
}




void EnterReincarnationScreen(void)
{
    ResetTasks();

    CreateTask(Task_Init, 3);
    SetMainCallback2(CB2);
}
