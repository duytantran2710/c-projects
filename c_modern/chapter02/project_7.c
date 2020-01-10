/* 
    Filename:   project_7.c
    Author:     nerd-oreo (Travis Tran)
    Created On: Jan 09, 2020
    Problem:    Write a program that asks the user to enter a U.S dollar amount and then shows
        how to pay that amount using the smallest number of $20, $10, $5 and $1 bills
*/
#include <stdio.h>

#define _20_DOLLAR_BILL 20
#define _10_DOLLAR_BILL 10
#define _5_DOLLAR_BILL  5
#define _1_DOLLAR_BILL  1

int main(void) {
    int amount, remain_amount;
    int total_of_20, total_of_10, total_of_5, total_of_1;

    total_of_20 = total_of_10 = total_of_5 = total_of_1 = 0;

    printf("Enter a dollar amount: $");
    scanf("%d", &amount);

    /* Calculate total of $20 needed */
    total_of_20 = amount / _20_DOLLAR_BILL;
    remain_amount = amount - (total_of_20 * _20_DOLLAR_BILL);

    /* Calculate the total of $10 needed */
    total_of_10 = remain_amount / _10_DOLLAR_BILL;
    remain_amount = remain_amount - (total_of_10 * _10_DOLLAR_BILL);

    /* Calculate the total of $5 needed */
    total_of_5 = remain_amount / _5_DOLLAR_BILL;
    remain_amount = remain_amount - (total_of_5 * _5_DOLLAR_BILL);

    /* Calculate the total of $1 needed */
    total_of_1 = remain_amount / _1_DOLLAR_BILL;

    printf("\n$20 bills: %d\n$10 bills: %d\n $5 bills: %d\n $1 bills: %d\n",
        total_of_20, total_of_10, total_of_5, total_of_1);

    return 0;
}