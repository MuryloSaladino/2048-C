//
// Created by muryl on 7/11/2024.
//

#ifndef INC_2048_C_EVENTS_H
#define INC_2048_C_EVENTS_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void goRight(int * matrix, int size, int * current_score);
void goLeft(int * matrix, int size, int * current_score);
void goUp(int * matrix, int size, int * current_score);
void goDown(int * matrix, int size, int * current_score);

void generateNewNumber(int * matrix, int size);
int verifyMatrix(int * matrix, int size);

#endif //INC_2048_C_EVENTS_H
