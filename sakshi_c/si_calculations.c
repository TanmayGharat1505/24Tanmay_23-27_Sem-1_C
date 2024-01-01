#include<stdio.h>

int main()
{
    float principal, rate, time, simple_intrest;

    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter rate of intrest: ");
    scanf("%f", &rate);

    printf("Enter time period (in years): ");
    scanf("%f", &time);

    simple_intrest = (principal * rate * time) / 100;

    printf("Simple Intrest = %.2f\n", simple_intrest);

    return 0;

}