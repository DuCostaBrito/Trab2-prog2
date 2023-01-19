#include "general.h"
#include "sprite.h"

#define BOARD_SIZE 8

typedef enum CANDY_TYPE 
{
    CT_RED = 0,
    CT_PURPLE,
    CT_GREEN,
    CT_ORANGE,
    CT_BLUE,
    CT_BROWN,
    CT_GRAY,
    CT_BLACK,
    CANDY_TYPE_N
} CANDY_TYPE;

typedef struct CANDY
{
    int x, y;
    int xBoardPos, yBoardPos;
    CANDY_TYPE type;
    bool seq;
} CANDY;

void initializeBoard(CANDY *board[]);
void candysDraw(CANDY *board[]);
