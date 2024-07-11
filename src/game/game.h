//
// Created by muryl on 7/11/2024.
//

#ifndef INC_2048_C_GAME_H
#define INC_2048_C_GAME_H

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include "../events/events.h"
#include "../score/score.h"
#include "../app/app.h"
#include "../app/terminal.h"

void runGameLoop(int * matrix, int size, int * current_score);

#endif //INC_2048_C_GAME_H
