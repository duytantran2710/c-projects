#ifndef PLAYER_H
#define PLAYER_H

#include "wordlist.h"

#define USED_LETTER_MAX 26

typedef struct Player {
    int chances;
    char guess_array[WORD_SIZE];  // guess word
    char used_letter[USED_LETTER_MAX];
    int used_index;
} Player;

extern Player player;

// prototype
void reset_player();
void init_guess_array(char []);
void update_guess_array(char letter, int index);
void print_guess_array();
void print_player_chances();
void update_used_letter(char letter);
void print_used_letter();

#endif