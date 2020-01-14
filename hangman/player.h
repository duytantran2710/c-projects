#ifndef PLAYER_H
#define PLAYER_H

#include "wordlist.h"

#define CHOSEN_LETTER_MAX 26

typedef struct Player {
    int chances;
    char guess[WORD_SIZE];  // guess word
    char chosen_letter[CHOSEN_LETTER_MAX];
} Player;

extern Player player;

// prototype
void reset_player();
void guess_initial(char []);
void guess_word_letter(char);
void print_guess();

#endif