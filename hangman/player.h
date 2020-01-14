#ifndef PLAYER_H
#define PLAYER_H

#include "wordlist.h"

#define CHOSEN_LETTER_MAX 26

typedef struct Player {
    int chances;
    char guess_word[WORD_SIZE];
    char chosen_letter[CHOSEN_LETTER_MAX];
} Player;

Player player;

// prototype
void reset_player();

#endif