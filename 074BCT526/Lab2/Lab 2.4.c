//This program swaps values of two variables provided by the user
#include <stdio.h>
int main()

//i. by using third variable
{
    int a, b, c;
    printf("Enter any two integers:\n");
    scanf("%d %d", &a, &b );
    printf("Before swapping: a = %d and b = %d\n", a, b);
    c = a;
    a = b;
    printf("After swapping: a = %d and b = %d", a, c);


//ii. without using third variable

    printf("\nEnter any two integers:\n");
    scanf("%d %d", &a, &b );
    printf("Before swapping: a = %d and b = %d\n", a, b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("After swapping: a = %d and b = %d", a, b);
    return 0;
}
