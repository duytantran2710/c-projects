/* 
    Filename:   project_4.c
    Author:     nerd-oreo (Travis Tran)
    Created On: Jan 5. 2020
    Problem:    Write a program that ask the user to enter a dollars-and-cents amount, then displays the amount with 5% tax added.
*/
#include <stdio.h>

int main(void) {
    float amount, amount_tax;

    printf("Enter an amount: $_______\b\b\b\b\b\b\b");
    scanf("%f", &amount);

    amount_tax = amount + (amount * 0.05);

    printf("With tax added: %.2f\n", amount_tax);
    return 0;
}