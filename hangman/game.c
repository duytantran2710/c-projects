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
    char guess_letter;
    /* Prepare for a new game */
    _split_str_to_arr();            // pick a random word from word list and copy it to game array
    reset_player();                 // reset player's stats
    current_stage = 0;              // reset game stage to initial
    init_guess_array(game_word);    // replace game_word with underscore

    while(TRUE) {
        set_game_stage(current_stage);

        // check for chances
        if(player.chances == 0) {
            game_status = LOSE;
            break;
        }
        
        printf("\n");
        printf("YOUR GUESS: ");
        print_guess_array();
        print_player_chances();
        print_used_letter();
        printf("Enter a letter: ");
        scanf(" %c", &guess_letter);
        update_used_letter(guess_letter);

        if(_check_player_guess(guess_letter) == FALSE) {
            player.chances = player.chances - 1;
            current_stage++;
        } else {
            if(strcmp(game_word, player.guess_array) == 0) {
                game_status = WIN;
                break;
            }
        }
    }
    printf("\n");
    printf("The word is: %s\n", game_word);
    if (game_status == WIN) {
        _win();
    } else if (game_status == LOSE) {
        _lose();
    }
    printf("\n");
    printf("Another game? (Y/N): ");
    scanf(" %c", &choice);

    if (choice == 'y' || choice == 'Y')
        start_game();
    else
        main_menu();
}

static int _random_index() {
    return (rand() % (WORD_LIST_SIZE - 0 + 1)) + 0;
}

static void _split_str_to_arr() {
    int index = _random_index();
    strncpy(game_word, WORD_LIST[index], sizeof(game_word));
}

static int _check_player_guess(char c) {
    int matched = FALSE;
    for(int i = 0; i < strlen(game_word); i++) {
        if(game_word[i] == c) {
            matched = TRUE;
            update_guess_array(c, i);
        }
    }

    return matched;
}

static void _win() {
    printf("\n");
    printf("          ____________\n");
    printf("         /            \\\n");
    printf("         | YOU WIN!!! |\n");
    printf("         \\____________/\n");
    printf("        /\n");
    printf("  \\(^o^)/\n");

}

static void _lose() {
    printf("\n");
    printf("         _____________\n");
    printf("        /             \\\n");
    printf("        | YOU LOSE!!! |\n");
    printf("        \\_____________/\n");
    printf("       /\n");
    printf("  (~.~;)\n");
}