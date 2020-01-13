/* 
    Project:    Classic Hangman Game
    Filename:   main.c
    Author:     nerd-oreo (Travis Tran)
    Created On: Jan 12, 2020
    Problem:    A classic hangman game
*/
#include <stdio.h>
#include <stdlib.h>
#include "game_variables.h"
#include "word_list.h"

#define CLRSCR system("@cls||clear")


// prototype
void game_banner();
void main_menu();


int main(void) {
    main_menu();

    CLRSCR;
    exit(0);
    return 0;
}

void game_banner() {
    printf("###################+-----------------+######################\n");
    printf("###################| CLASSIC HANGMAN |######################\n");
    printf("###################+-----------------+######################\n");
    printf("##                                                        ##\n");
    printf("##  ||=======+                  @  @  @@  @ @@  @@@@      ##\n");
    printf("##  ||       |                  @@@@ @@@@ @@  @ @  @      ##\n");
    printf("##  ||       O                  @  @ @  @ @   @ @@@@      ##\n");
    printf("##  ||      /|\\                                    @      ##\n");
    printf("##  ||       |                                  @@@@      ##\n");
    printf("##  ||      / \\             @ @@ @@   @@  @ @@            ##\n");
    printf("##  ||                      @@  @  @ @@@@ @@  @           ##\n");
    printf("##  ||=================     @   @  @ @  @ @   @           ##\n");
    printf("##                                                        ##\n");
    printf("############################################################\n");
    printf("############################################################\n");
}

void main_menu() {
    CLRSCR;
    game_banner();

    if(error == TRUE) {
        printf("\n");
        printf("[*] Error: Invalid choice!\n");
    }

    printf("\n");
    printf("1. Start Game\n");
    printf("2. Quit\n");
    printf("\n");
    printf("Select: ");
    scanf(" %c", &choice);

    switch(choice) {
        case '1':
            // start game
            break;
        case '2':
            break;
        default:
            error = TRUE;
            main_menu();
    }

}