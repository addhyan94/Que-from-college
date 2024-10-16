#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    float p, rate, time,si,ci;
    printf("\n Enter the principal amount =");
    scanf("%f",&p);
    printf("\n Enter the Time in year  = ");
    scanf("%f",&time);
    printf("\n Enter the Rate of intrest =");
    scanf("%f",&rate);
    si= p*rate*time/100;
    ci=p*pow((1+rate/100),time)-p;
    printf("\n Simple intrest =%f",si);
    printf("\n Compund intrest =%f",ci);
    return 0;
}