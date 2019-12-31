#include <stdio.h>
#include <stdlib.h>
#include "bmi.h"

#define TRUE 1
#define CLRSCR system("@cls || clear");
#define PRINT_EMPTY_LINE printf("\n");

int main(void) {

    int unit_choice;
    char continue_choice;

    while(TRUE) {
        CLRSCR;
        printf("BMI Calculator\n");
        printf("---\n");
        printf(" 1. Imperial Unit\n");
        printf(" 2. Metric Unit\n");
        PRINT_EMPTY_LINE;
        printf("Select: ");
        scanf(" %d", &unit_choice);

        switch(unit_choice) {
          case 1:
            calculate_bmi_imperial();
            break;
          case 2:
            calculate_bmi_metric();
            break;
        }

        // continue or exit
        PRINT_EMPTY_LINE;
        printf("Continue? (please enter y or n) ");
        scanf(" %c", &continue_choice);

        if(continue_choice == 'n' || continue_choice == 'N') {
            CLRSCR;
            break;
        }
    };

    return 0;
}