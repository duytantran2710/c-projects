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
#include "global_vars.h"

#define CLEAR_SCREEN system("@cls||clear")
#define TRUE    1
#define FALSE   0


/* Prototype */
// I/O
void print_banner();
void print_main_menu();
void select_state();
void calculate_sale_tax();

// utilities
float convert_rate_to_decimal(float rate);


int main(void) {
    
    print_main_menu();
    CLEAR_SCREEN;
    return 0;
}

/* Print program banner */
void print_banner() {
    printf("***************************************\n");
    printf("*                                     *\n");
    printf("*         SALE TAX CALCULATOR         *\n");
    printf("*            nerd-oero 2020           *\n");
    printf("*                                     *\n");
    printf("***************************************\n\n");
}

/* Prompt main menu and return user choice */
void print_main_menu() {
    CLEAR_SCREEN;
    print_banner();
    printf("1. Set Your State\n2. Calculate Sale Tax\n3. Quit\n\nSelect: ");
    scanf(" %c", &choice);

    switch(choice) {
        case '1':
            select_state(); break;
        case '2':
            calculate_sale_tax(); break;
        case '3':
            break;
        default:
            printf("Invalid choice. Do you want to continue? (y/n): ");
            scanf(" %c", &choice);
            if(choice == 'Y' || choice == 'y') {
                CLEAR_SCREEN;
                print_main_menu();
            } else
                break;
    }

}

void select_state() {
    printf("Select State\n");
    printf("Press a key to continue\n");
    getchar();
}

void calculate_sale_tax() {
    printf("Calculate Sale Tax\n");
}

/* Utilities */
float convert_rate_to_decimal(float rate) {
    return rate/100.0f;
}