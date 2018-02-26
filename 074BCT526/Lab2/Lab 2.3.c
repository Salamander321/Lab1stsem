/*This program calculates simple interest and compound interest
when principal, rate and time are entered by the user */
#include <stdio.h>
#include <math.h>
int main()
{
    int p, t;
    float r, si, ci;
    printf("Enter principal, time and rate in order:\n");
    scanf("%d %d %f", &p, &t, &r);
    si=p*t*r/100;
    ci=p*pow((1+r/100),t)-p;
    printf("The simple interest is: Rs.%.2f\n", si);
    printf("The compound interest is: Rs.%.2f", ci);
}


