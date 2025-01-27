//
// Created by muryl on 7/11/2024.
//

#ifndef INC_2048_C_TERMINAL_H
#define INC_2048_C_TERMINAL_H

#ifdef __WIN32
#include <windows.h>
#endif

#include <stdio.h>

#define TERMINAL_PROCESSING 0x0004

#define SAVE_CURSOR() printf("\e7")

#define LOAD_CURSOR() printf("\e8")

#define ERASE_LEND() printf("\e[0K")

#define ERASE_ALL() printf("\e[2J")

#define MOVE_HOME() printf("\e[H")

#define HIDE_CURSOR() printf("\e[?25l")

#define SHOW_CURSOR() printf("\e[?25h")

#define FOREGROUND_COLOR(r, g, b) printf("\e[38;2;" #r ";" #g ";" #b "m")

#define BACKGROUND_COLOR(r, g, b) printf("\e[48;2;" #r ";" #g ";" #b "m")

#define RESET_FOREGROUND() printf("\e[39m")

#define RESET_BACKGROUND() printf("\e[49m")

#define RESET_COLOR() printf("\e[0;0;0m")

#define MOVE_DOWN(l) printf("\e[" l "B")

#define MOVE_UP(l) printf("\e[" l "A")

void configureTerminal();


#endif //INC_2048_C_TERMINAL_H
