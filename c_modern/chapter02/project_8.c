/* 
    Filename:   project_8.c
    Author:     nerd-oreo (Travis Tran)
    Created On: Jan 15, 2020
    Problem:    Calculate remain balance after first, second, and third month
*/
#include <stdio.h>

int main(void) {
    float balance, interest_rate, monthly_payment, monthly_interest_rate;

    printf("Enter amount of loan: ");
    scanf("%f", &balance);

    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);

    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    monthly_interest_rate = (interest_rate/100.0)/12.0; // divide by 12 months

    // calculate remain balance of first month
    balance = (balance - monthly_payment) + (balance * monthly_interest_rate);
    printf("Balance remaining after first month: %.2f\n", balance);

    // second month
    balance = (balance - monthly_payment) + (balance * monthly_interest_rate);
    printf("Balance remaining after second month: %.2f\n", balance);

    // third month
    balance = (balance - monthly_payment) + (balance * monthly_interest_rate);
    printf("Balance remaining after third month: %.2f\n", balance);

    return 0;
}
