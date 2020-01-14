#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "wordlist.h"
#include "player.h"

Player player = (Player) {5, {}, {}};

void reset_player() {
    player = (Player) {5, {}, {}};
}

void guess_initial(char s[]) {
    for(int i = 0; i < strlen(s); i++) {
        player.guess[i] = '_';
    }
}

void print_guess() {
    for(int i = 0; i < strlen(player.guess); i++) {
        printf("%c ", player.guess[i]);
    }
    printf("\n");
}