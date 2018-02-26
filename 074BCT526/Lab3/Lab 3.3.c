//Following program declares basic mathematical operators as macros and carries out the operation using macros
#include<stdio.h>
#define PI 3.1415
#define mult(a,b) (a*b)
#define sum(a,b) (a+b)
#define sub(a,b) (a-b)
#define div(a,b) (a/b)
int main() {
    int a=8,b=4;
    float c;
    c=PI*mult(a,b);
    printf("Multiplication: %f",c);
    c=PI*sum(a,b);
    printf("\nSum: %f",c);
    c=PI*sub(a,b);
    printf("\nSubtraction: %f",c);
    c=PI*div(a,b);
    printf("\nDivision: %f",c);
    return 0;
}
