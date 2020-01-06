/* 
    Filename:   project_3.c
    Author:     nerd-oreo (Travis Tran)
    Created On: Jan 05, 2020
    Problem:    Modify the project_2.c so that it prompts the user to enter the radius of the sphere.
*/
#include <stdio.h>

#define PI 3.14159265359

int main(void) {
    float radius, volumn;

    printf("Enter radius: ");
    scanf("%f", &radius);
    volumn = 4.0f/3.0f *(PI*(radius*radius*radius));    // when write the fraction as 4/3, the formula gives a wrong result 3141.592773. Correct answer: 4188.790527
    printf("Volumn of a sphere: %f\n", volumn);
    return 0;
}