#ifndef INIT_H
#define INIT_H

#include "wordlist.h"

char game_word[WORD_SIZE];

void start_game();

// private function - scope: game_init.c
static int _random_index();
static void _split_str_to_arr();

#endif