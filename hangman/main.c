/* 
    Project:    Classic Hangman Game
    Filename:   main.c
    Author:     nerd-oreo (Travis Tran)
    Created On: Jan 12, 2020
    Problem:    A classic hangman game
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "common.h"
#include "game.h"
#include "wordlist.h"

int main(void) {
    srand(time(NULL));

    main_menu();

    CLRSCR;
    exit(0);
    return 0;
}

