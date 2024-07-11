//
// Created by muryl on 7/11/2024.
//

#ifndef INC_2048_C_APP_H
#define INC_2048_C_APP_H

#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include "../score/score.h"
#include "terminal.h"

void printHome(void);
void printHighScores(void);
void printGame(int * matrix, int size, int current_score);

#endif //INC_2048_C_APP_H
