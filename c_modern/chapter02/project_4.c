/* 
    Filename:   project_4.c
    Author:     nerd-oreo (Travis Tran)
    Created On: Jan 5. 2020
    Problem:    Write a program that ask the user to enter a dollars-and-cents amount, then displays the amount with 5% tax added.
*/
#include <stdio.h>

int main(void) {
    float amount;

    printf("Enter an amount: ");
    scanf("%f", &amount);

    printf("With tax added: %.2f\n");
    return 0;
}