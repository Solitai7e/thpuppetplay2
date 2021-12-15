#include "global.h"
#include "event_data.h"
#include "event_scripts.h"
#include "field_effect.h"
#include "field_player_avatar.h"
#include "field_screen_effect.h"
#include "field_weather.h"
#include "fldeff.h"
#include "mirage_tower.h"
#include "palette.h"
#include "party_menu.h"
#include "script.h"
#include "sound.h"
#include "sprite.h"
#include "task.h"
#include "wild_encounter.h"
#include "constants/field_effects.h"
#include "constants/rgb.h"
#include "constants/songs.h"

static void FieldCallback_NaturePower(void);
static void StartNaturePowerFieldEffect(void);
static void TryNaturePowerEncounter(u8 taskId);
static void FailNaturePowerEncounter(u8 taskId);

bool8 SetUpFieldMove_NaturePower(void)
{
    gFieldCallback2 = FieldCallback_PrepareFadeInFromMenu;
    gPostMenuFieldCallback = FieldCallback_NaturePower;
    return TRUE;
}

static void FieldCallback_NaturePower(void)
{
    FieldEffectStart(FLDEFF_NATURE_POWER);
    gFieldEffectArguments[0] = GetCursorSelectionMonId();
}

bool8 FldEff_NaturePower(void)
{
    u8 taskId;

    SetWeatherScreenFadeOut();
    taskId = CreateFieldMoveTask();
    gTasks[taskId].data[8] = (u32)StartNaturePowerFieldEffect >> 16;
    gTasks[taskId].data[9] = (u32)StartNaturePowerFieldEffect;
    return FALSE;
}

static void StartNaturePowerFieldEffect(void)
{
    u8 taskId;

    PlaySE(SE_M_NATURE_POWER);
    CpuFastSet(gPlttBufferUnfaded, gPaletteDecompressionBuffer, 0x100);
    CpuFastSet(gPlttBufferFaded, gPlttBufferUnfaded, 0x100);
    BeginNormalPaletteFade(~(1 << (gSprites[GetPlayerAvatarSpriteId()].oam.paletteNum + 16)), 4, 0, 8, RGB_RED);
    taskId = CreateTask(TryNaturePowerEncounter, 0);
    gTasks[taskId].data[0] = 0;
    FieldEffectActiveListRemove(FLDEFF_NATURE_POWER);
}

static void TryNaturePowerEncounter(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        ClearMirageTowerPulseBlendEffect();
        BlendPalettes(0x00000040, 8, RGB_RED);
        if (gTasks[taskId].data[0] == 64)
        {
            gTasks[taskId].data[0] = 0;
            if (NaturePowerWildEncounter() == TRUE)
            {
                DestroyTask(taskId);
            }
            else
            {
                gTasks[taskId].func = FailNaturePowerEncounter;
                BeginNormalPaletteFade(~(1 << (gSprites[GetPlayerAvatarSpriteId()].oam.paletteNum + 16)), 4, 8, 0, RGB_RED);
                TryStartMirageTowerPulseBlendEffect();
            }
        }
        else
        {
            gTasks[taskId].data[0]++;
        }
    }
}

static void FailNaturePowerEncounter(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        CpuFastSet(gPaletteDecompressionBuffer, gPlttBufferUnfaded, 0x100);
        SetWeatherPalStateIdle();
        ScriptContext1_SetupScript(EventScript_FailNaturePower);
        DestroyTask(taskId);
    }
}
