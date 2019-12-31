#include <stdio.h>
#include "bmi.h"

void calculate_bmi_imperial() {
    UserInfo user_info;
    float ft, in;

    printf("---\n");
    printf("Enter your weight (lbs): ");
    scanf(" %f", &user_info.weight);
    printf("Enter your height:\n");
    printf(" Feet: ");
    scanf(" %f", &ft);
    printf(" Inches: ");
    scanf(" %f", &in);

    user_info.height = convert_ft_to_in(ft, in);

    // calculate BMI
    user_info.bmi = 703 * (user_info.weight / (user_info. height * user_info.height));
    print_result(user_info.bmi);
}

void calculate_bmi_metric() {
    UserInfo user_info;

    printf("---\n");
    printf("Enter your weight (kg): ");
    scanf(" %f", &user_info.weight);
    printf("Enter your height (m): ");
    scanf(" %f", &user_info.height);

    // calculate BMI
    user_info.bmi = user_info.weight / (user_info.height * user_info.height);
    print_result(user_info.bmi);
}

char * get_bmi_status(float bmi) {
    char *status;

    if(bmi < 18.5) 
        status = "UNDERWEIGHT";
    else if (bmi >= 18.5 && bmi <= 24.9)
        status = "HEALTHY";
    else if (bmi > 24.9 && bmi < 29.9)
        status = "OVERWEIGHT";
    else if (bmi > 30.0)
        status = "OBESITY";

    return status;
}

float convert_ft_to_in(float ft, float in) {
    return (ft * 12) + in;
}

void print_result(float bmi) {
    printf("\n");
    printf("Your BMI is %.2f\n", bmi);
    printf("Your are in \"%s\" range\n", get_bmi_status(bmi));    
}