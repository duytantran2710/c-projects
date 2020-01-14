#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "common.h"
#include "game.h"
#include "wordlist.h"
#include "player.h"
#include "stage.h"

void start_game() {
    _split_str_to_arr();    // pick a random word from word list and copy it to game array
    reset_player();         // reset player's stats


    set_stage(0);

    printf("%s\n", game_word);

    guess_initial(game_word);
    print_guess();


    scanf(" %c", &choice);

}

static int _random_index() {
    return (rand() % (WORD_LIST_SIZE - 0 + 1)) + 0;
}

static void _split_str_to_arr() {
    int index = _random_index();
    strncpy(game_word, WORD_LIST[index], sizeof(game_word));

}