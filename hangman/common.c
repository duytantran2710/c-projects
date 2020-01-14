#include <stdio.h>
#include <stdlib.h>
#include "common.h"
#include "game.h"

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
            start_game();
            break;
        case '2':
            break;
        default:
            error = TRUE;
            main_menu();
    }
}