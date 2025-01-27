#include "./src/events/events.h"
#include "./src/score/score.h"
#include "./src/app/app.h"
#include "./src/app/terminal.h"
#include "./src/game/game.h"
#include <stdlib.h>
#include <stdio.h>

int main(void) {
    srand(time(NULL));

    int current_score = 0, size = 0;
    char name[4], end;

    configureTerminal();
    HIDE_CURSOR();

    printHome();

    MOVE_HOME();
    ERASE_ALL();
    printf("#####################################################################\n");
    printf("#                                                                   #\n");
    printf("#                                                                   #\n");
    printf("#                                                                   #\n");
    printf("#               What is your name? (3 letters only)                 #\n\n");
    printf("                                 ");
    fflush(stdout);

    scanf("%s", name);
    name[3] = '\0';

    while(size < 2 || size > 8)
    {
        printf("\n#                 What size do you want? (4 to 8)                   #\n\n");
        printf("                                 ");
        fflush(stdout);
        scanf("%i", &size);

        if(size < 4 || size > 16)
        {
            printf("#                            \033[31mInvalid size\033[0m                           #\n");
            fflush(stdout);
        }
    }

    printf("#                                                                   #\n");
    printf("#                         Ok, let's play!                           #\n");
    printf("#                                                                   #\n");
    printf("#####################################################################\n");
    fflush(stdout);
    Sleep(2000);


    int * matrix = malloc(sizeof(int) * size * size);
    for(int i = 0; i < size*size; i++)
        matrix[i] = 0;

    generateNewNumber(matrix, size);
    generateNewNumber(matrix, size);

    runGameLoop(matrix, size, &current_score);
    saveScore(current_score, name);


    while ((end = getch()))
        if(end == 27) break;

    free(matrix);
    return 0;
}
