//program to print sum upto given number using recursion.
#include <stdio.h>
int sum(int n);
int main(){
int n;
int x;
printf("Enter a number\n");
scanf("%d",&n);
x = sum(n);
printf("Sum upto %d no. is %d",n,x);
return 0;
}
int sum(int n){
if (n != 0)
    return n + sum(n-1);
}
