/* 
    Filename:   project_6.c
    Author:     nerd-oreo (Travis Tran)
    Created On: Jan 07, 2020
    Problem:    Modify project #5 so that the polynomial is evaluated
        using the following formula:    
        ((((3x + 2)x - 5)x - 1)x + 7)x - 6
*/
#include <stdio.h>

int main(void) {
    int x;  

    printf("Enter x: ");
    scanf("%d", &x);
    printf("Evaluate ((((3x + 2)x - 5)x - 1)x + 7)x - 6, x = %d\n", x);
    printf("x = %d\n", ((((3*x + 2)*x - 5)*x - 1)*x + 7)*x - 6);

    return 0;
}