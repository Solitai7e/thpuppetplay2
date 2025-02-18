#ifndef GUARD_INTRO_CREDITS_GRAPHICS_H
#define GUARD_INTRO_CREDITS_GRAPHICS_H

// States for gIntroCredits_MovingSceneryState
enum {
    INTROCRED_SCENERY_NORMAL,
    INTROCRED_SCENERY_DESTROY,
    INTROCRED_SCENERY_FROZEN,
};

// Scenes for the Credits sequence
enum {
    SCENE_OCEAN_MORNING,
    SCENE_OCEAN_SUNSET,
    SCENE_FOREST_RIVAL_ARRIVE,
    SCENE_FOREST_CATCH_RIVAL,
    SCENE_CITY_NIGHT,
};

extern u16 gIntroCredits_MovingSceneryVBase;
extern s16 gIntroCredits_MovingSceneryVOffset;
extern s16 gIntroCredits_MovingSceneryState;

extern const struct CompressedSpriteSheet gSpriteSheet_IntroBrendan[];
extern const struct CompressedSpriteSheet gSpriteSheet_IntroMay[];
extern const struct CompressedSpriteSheet gSpriteSheet_IntroBicycle[];
extern const struct CompressedSpriteSheet gSpriteSheet_IntroASanae[];
extern const struct SpritePalette gSpritePalettes_IntroPlayerASanae[];
extern const struct CompressedSpriteSheet gSpriteSheet_CreditsBrendan[];
extern const struct CompressedSpriteSheet gSpriteSheet_CreditsMay[];
extern const struct CompressedSpriteSheet gSpriteSheet_CreditsBicycle[];
extern const struct CompressedSpriteSheet gSpriteSheet_CreditsRivalBrendan[];
extern const struct CompressedSpriteSheet gSpriteSheet_CreditsRivalMay[];
extern const struct SpritePalette gSpritePalettes_Credits[];

void LoadIntroPart2Graphics(u8 scene);
void SetIntroPart2BgCnt(u8 a);
void LoadCreditsSceneGraphics(u8);
void SetCreditsSceneBgCnt(u8);
u8 CreateBicycleBgAnimationTask(u8 a, u16 b, u16 c, u16 d);
void CycleSceneryPalette(u8);
u8 CreateIntroBrendanSprite(s16 x, s16 y);
u8 CreateIntroMaySprite(s16 x, s16 y);
u8 CreateIntroASanaeSprite(s16 x, s16 y);

#endif // GUARD_INTRO_CREDITS_GRAPHICS_H
