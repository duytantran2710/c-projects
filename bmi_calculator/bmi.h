#ifndef BMI_H
#define BMI_H

// user info
typedef struct {
    float weight;
    float height;
    float bmi;
} UserInfo;

// function prototype
void calculate_bmi_imperial();
void calculate_bmi_metric();
char * get_bmi_status(float);
float convert_ft_to_in(float, float);
void print_result(float);

#endif