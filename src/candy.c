#include "../candy.h"
#include "../sprite.h"

void initializeBoard(CANDY *board[]) {
    int i, j;
    for (i = 0; i < BOARD_SIZE; i++) {
        for (j = 0; j < BOARD_SIZE; j++) {
            // Escolhe um tipo aleatorio
            enum CANDY_TYPE ct = (between(0, CANDY_TYPE_N));
            board[i][j].type = ct;
            board[i][j].xBoardPos = i;
            board[i][j].yBoardPos = j;
            board[i][j].x = i * 24;
            board[i][j].y = j * 24;
            board[i][j].seq = false;
        }
    }
    return;
}

void candysDraw(CANDY *board[]) {
    int i, j;
    for (i = 0; i < BOARD_SIZE; i++) {
        for (j = 0; j < BOARD_SIZE; j++) {
            if (!board[i][j].seq)
                continue;
            al_draw_bitmap(sprites.candy[board[i][j].type], board[i][j].x, board[i][j].y, 0);
        }
    }
    return;
}