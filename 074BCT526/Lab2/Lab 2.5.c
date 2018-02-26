//This program checks whether the integer provided by the user is
//odd or even
#include <stdio.h>
int main()

//i. using modulus
{
    int a;
    printf("Enter an integer: \n");
    scanf("%d", &a);
    if (a%2==0)
        printf("Even");
    else
        printf("Odd");


//ii. using bitwise operator

    printf("\nEnter an integer: \n");
    scanf("%d", &a);
    if (a&1==1)
        printf("Odd");
    else
        printf("Even");


//iii. without using modulus and bitwise operators

    printf("\nEnter an integer: \n");
    scanf("%d", &a);
    if ((a/2)*2==a)
        printf("Even");
    else
        printf("Odd");


//iv. using conditional operator

    printf("\nEnter an integer: \n");
    scanf("%d", &a);
    a%2==0? printf("Even"):printf("Odd");
    return 0;

}

