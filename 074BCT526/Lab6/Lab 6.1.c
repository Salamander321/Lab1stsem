//Following program performs simple mathematical operations using functions
#include<stdio.h>
int sum(int,int);
int sub(int,int);
int mult(int,int);
float div(int,int);
int main() {
    int num1,num2,add,subt,multi;
    float divi;
    printf("Enter two numbers: ");
    scanf("%d %d",&num1,&num2);
    add=sum(num1,num2);
    subt=sub(num1,num2);
    multi=mult(num1,num2);
    divi=div(num1,num2);
    printf("Sum: %d",add);
    printf("\nSubtraction: %d",subt);
    printf("\nMultiplication: %d",multi);
    printf("\nDivision: %f",divi);
    return 0;
}

int sum(int a,int b) {
    return (a+b);
}

int sub(int a,int b) {
    return (a-b);
}

int mult(int a,int b) {
    return (a*b);
}

float div(int a,int b) {
    return ((float)a/b);
}
