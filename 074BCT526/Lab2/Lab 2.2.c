//This program reads 3 integers from user and displays them in forward and reverse order
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter any three integers:\n");
    scanf("%d %d %d", &a, &b, &c);
    printf("The forward order is: %d, %d, %d\n", a, b, c);
    printf("The reverse order is: %d, %d, %d", c, b, a);
    return 0;
}

