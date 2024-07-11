//
// Created by muryl on 7/11/2024.
//

#ifndef INC_2048_C_SCORE_H
#define INC_2048_C_SCORE_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../app/terminal.h"

typedef struct
{
    char name[4];
    char score[7];
} Score;

void saveScore(int player_score_int, char player_name[4]);

#endif //INC_2048_C_SCORE_H
