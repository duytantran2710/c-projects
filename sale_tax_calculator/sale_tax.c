/* 
    Project:    Sale Tax Calculator
    Filename:   main.c
    Author:     nerd-oreo (Travis Tran)
    Created On: Jan 10, 2020
    Problem:    Calculate sale tax based on user's state/location
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sale_tax.h"

#define CLEAR_SCREEN system("@cls||clear")

// static variables
static char choice;
static StateRate user_state_rate;

/* Prototype */
void banner();
void main_menu();
void print_user_state_rate();
void select_state();
void calculate_sale_tax();
float convert_rate_to_decimal(float rate);


int main(void) {

    user_state_rate = STATE_RATE_DB[0];
    
    main_menu();
    CLEAR_SCREEN;
    return 0;
}

/* Print program banner */
void banner() {
    printf("***************************************\n");
    printf("*                                     *\n");
    printf("*         SALE TAX CALCULATOR         *\n");
    printf("*            nerd-oero 2020           *\n");
    printf("*                                     *\n");
    printf("***************************************\n\n");
}

/* Prompt main menu and return user choice */
void main_menu() {
    CLEAR_SCREEN;
    banner();

    print_user_state_rate();
    printf("1. Set Your State\n2. Calculate Sale Tax\n3. Quit\n\nSelect: ");
    scanf(" %c", &choice);

    switch(choice) {
        case '1':
            select_state(); 
            break;
        case '2':
            calculate_sale_tax(); break;
        case '3':
            break;
        default:
            printf("Invalid choice. Do you want to continue? (y/n): ");
            scanf(" %c", &choice);
            if(choice == 'Y' || choice == 'y') {
                CLEAR_SCREEN;
                main_menu();
            } else
                break;
    }
}

void print_user_state_rate() {
    if(strcmp(user_state_rate.state, "NULL") != 0) {
        printf("Your State: %s - Tax Rate: %.2f%%\n\n", user_state_rate.state, user_state_rate.rate);
    }    
}

void select_state() {
    int state_selected = 0;
    int counter = 1;

    CLEAR_SCREEN;
    banner();
    printf("Please select your state:\n");
    for(int i = 1; i < DB_SIZE; i++) {
        printf("%2d. %15s", i, STATE_RATE_DB[i].state);
        counter++;
        if(counter > 3) {
            printf("\n");
            counter = 1;
        } else {
            printf("\t\t");
        }
    }
    printf("\n\nSelect: ");
    scanf(" %d", &state_selected);

    if(state_selected > 0 && state_selected <= 54) {
        user_state_rate = STATE_RATE_DB[state_selected];
    } else {
        printf("Invalid choice. Do you want to continue? (y/n): ");
        scanf(" %c", &choice);
        if(choice == 'y' || choice == 'Y')
            select_state();
    }

    main_menu();
}

void calculate_sale_tax() {
    

}

/* Utilities */
float convert_rate_to_decimal(float rate) {
    return rate/100.0f;
}