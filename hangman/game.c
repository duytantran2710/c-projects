#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "common.h"
#include "game.h"
#include "wordlist.h"
#include "player.h"


void start_game() {

    _split_str_to_arr();

    for(int i = 0; i < strnlen(game_word, sizeof(game_word)); i++) {
        printf("%c ", game_word[i]);
    }


    scanf(" %c", &choice); 

}

static int _random_index() {
    return (rand() % (WORD_LIST_SIZE - 0 + 1)) + 0;
}

static void _split_str_to_arr() {
    int index = _random_index();
    strncpy(game_word, WORD_LIST[index], sizeof(game_word));

}