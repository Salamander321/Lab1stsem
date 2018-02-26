//Simple Interest where P=4000, T=2, R=5.5//
#include <stdio.h>
int main()
{
    int p, t;
    float r, i;
    p=4000;
    t=2;
    r=5.5;
    i=(p * t * r) / 100;
    printf("The simple interest is Rs.%f", i);
    return 0;
}
