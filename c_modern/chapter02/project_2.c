/* 
    Filename:   project_2.c
    Author:     nerd-oreo (Travis Tran)
    Created On: Jan 05, 2020
    Problem:    Write a program that computes the volume of a sphere with a 10-meter radius, using the formula v=4/3PIr^3. Write the fraction 4/3 as 4.0f/3.0f. (Try writing it as 4/3. What happen?) Hint: C doesn't have an exponentiation operator, so you'll need to multiply r by itself twice to compute r^3.
*/
#include <stdio.h>

#define PI 3.14159265359

int main(void) {
    float radius = 10.0f;
    float volumn;

    volumn = 4.0f/3.0f *(PI*(radius*radius*radius));    // when write the fraction as 4/3, the formula gives a wrong result 3141.592773. Correct answer: 4188.790527
    printf("Volumn of a sphere: %f\n", volumn);
    return 0;
}