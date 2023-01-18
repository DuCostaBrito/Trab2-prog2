#include "general.h"


ALLEGRO_DISPLAY* disp;
ALLEGRO_BITMAP* buffer;

#define BUFFER_W 240
#define BUFFER_H 320

#define DISP_SCALE 3
#define DISP_W (BUFFER_W * DISP_SCALE)
#define DISP_H (BUFFER_H * DISP_SCALE)

void disp_init();

void disp_deinit();

void disp_pre_draw();

void disp_post_draw();