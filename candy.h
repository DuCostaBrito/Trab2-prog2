#include "general.h"

#define CANDY_W 24
#define CANDY_H 24


typedef struct SPRITES
{
    ALLEGRO_BITMAP* _sheet;
    ALLEGRO_BITMAP* candy[8];
} SPRITES;
SPRITES sprites;

ALLEGRO_BITMAP* sprite_grab(int x, int y, int w, int h);

void sprites_init();

void sprites_deinit();