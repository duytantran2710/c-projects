#ifndef INIT_H
#define INIT_H

#include "wordlist.h"

#define WIN 1
#define LOSE 0

char game_word[WORD_SIZE];
int game_status;

void start_game();

// private function - scope: game_init.c
static int _random_index();
static void _split_str_to_arr();
static int _check_player_guess(char c);
static void _win();
static void _lose();
#endif