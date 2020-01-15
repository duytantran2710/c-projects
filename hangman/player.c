#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "wordlist.h"
#include "player.h"

Player player = (Player) {5, {}, {0}, 0};

void reset_player() {
    player = (Player) {5, {}, {0}, 0};
}

/* Initial guess array with underscore */
void init_guess_array(char s[]) {
    for(int i = 0; i < strlen(s); i++) {
        player.guess_array[i] = '_';
    }
}

void update_guess_array(char letter, int index) {
    player.guess_array[index] = letter;
}

void print_guess_array() {
    for(int i = 0; i < strlen(player.guess_array); i++) {
        printf("%c", player.guess_array[i]);
    }
    printf("\n\n");
}

void print_player_chances() {
    printf("Your chances: %d\n\n", player.chances);
}

void update_used_letter(char letter) {
    player.used_letter[player.used_index] = letter;
    player.used_index++;
}

void print_used_letter() {
    if(player.used_letter[0] != 0) {
        printf("Used letters:");
        for(int i = 0; i < strlen(player.used_letter); i++) {
            printf(" %c", toupper(player.used_letter[i]));
        }
        printf("\n\n");
    }
}
