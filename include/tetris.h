#pragma once
#include "SDL2/SDL.h" 
#include "SDL2/SDL_opengl.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <memory.h>

#include "mechanics.h"
#include "tetrinos.h"
/*

Graphics + Graphics_OpenGL:
    - Possibly might need GLFW, and if so might use https://github.com/floooh/sokol
Audio:
    - 8bit theme song, cccp anthem
    - Tetris achieved
    - 
Physic.Assets:
    Tetrinos: 
        - Zr, Zl, T, I, Ll, Lr, Box
        - OpenGL ver.
    Board/Field: 
        - 20x10 blocks (HxW)
Debugging and Unit Test:
*/
#define BOARD_HEIGHT 20
#define BOARD_LENGTH 10
#define TRUE 1
#define FALSE 0


int board[BOARD_HEIGHT][BOARD_LENGTH];


