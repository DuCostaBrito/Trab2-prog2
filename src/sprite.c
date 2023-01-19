#include "../sprite.h"

ALLEGRO_BITMAP* sprite_grab(int x, int y, int w, int h)
{
    ALLEGRO_BITMAP* sprite = al_create_sub_bitmap(sprites._sheet, x, y, w, h);
    must_init(sprite, "sprite grab");
    return sprite;
}

void sprites_init()
{
    int i, j;
    sprites._sheet = al_load_bitmap("./resources/images/test_fruits.png");
    must_init(sprites._sheet, "spritesheet");

    for (i = 0; i < 4; i++) {
        sprites.candy[i] = sprite_grab(i * CANDY_W, 0, CANDY_W, CANDY_H);
        sprites.candy[i + 4] = sprite_grab(i * CANDY_W, CANDY_H, CANDY_W, CANDY_H);
    }
}


void sprites_deinit()
{
    int i;
    for (i = 0; i < 8; i++) {
        al_destroy_bitmap(sprites.candy[i]);
    }

    al_destroy_bitmap(sprites._sheet);
}