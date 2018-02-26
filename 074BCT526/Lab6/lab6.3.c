//program to calculate factorial.
#include <stdio.h>
int fact (int);
int main(){
int n;
printf("Enter any positive number: ");
scanf("%d",&n);
printf("Factorial of %d is %u",n,fact(n));
return 0;

}
int fact(int n){

if (n > 0)
    return n * fact(n-1);
else
    return 1;

}
