#ifndef COMMON_H
#define COMMON_H
#include <stdio.h>

#define CLRSCR system("@cls||clear")

#define TRUE 1
#define FALSE 0

// global variables
char choice;
int error; // error flag


// common use functions
void game_banner();
void main_menu();

#endif