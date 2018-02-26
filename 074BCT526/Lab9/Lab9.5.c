#include<stdio.h>
#include<stdlib.h>
typedef struct complex {
    float real, imgnry;
} comp;
int main() {
    comp num1, num2, add, sub;
    printf("Enter the real and imaginary parts of the first complex number: ");
    scanf("%f %f",&num1.real,&num1.imgnry);
    printf("Enter the real and imaginary parts of the second complex number: ");
    scanf("%f %f",&num2.real,&num2.imgnry);
    add.real=num1.real+num2.real;
    add.imgnry=num1.imgnry+num2.imgnry;
    sub.real=num1.real-num2.real;
    sub.imgnry=num1.imgnry-num2.imgnry;
    printf("The addition of the given complex numbers are: %.2f + %.2fi",add.real,add.imgnry);
    printf("\nThe subtraction of the given complex numbers are: %.2f + %.2fi",sub.real,sub.imgnry);
    return 0;
}
