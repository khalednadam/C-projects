#include <stdio.h>
#include <stdlib.h>
double bmiCalc(double w, double h);
int main(int argc, char *argv[])
{
    printf("Enter your weight in kilogram : ");
    double weight, height;
    scanf("%lf", &weight);
    printf("\nEnter your height in meters : ");
    scanf("%lf", &height);
    double bmi = bmiCalc(weight, height);
    printf("your BMI is : %.1f\n", bmi);
    if(bmi < 18.5){
        printf("You are underweight\n");
    } else if(bmi >= 18.5 && bmi <= 24.9){
        printf("You are normal\n");
    } else if(bmi >= 25 && bmi <= 29.9){
        printf("You are overwright\n");
    } else{
        printf("You are obese\n");
    }
    return 0;
}
double bmiCalc(double w, double h){
    double cal;
    cal = (w) / ((h) * (h));
    return cal;
}