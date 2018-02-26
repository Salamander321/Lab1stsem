#include <stdio.h>
int main(){
int *p,*q;
int a,b;
printf("Enter any two numbers :");
scanf("%d %d",&a,&b);
printf("\n Value before swapping are %d and %d",a,b);
p = &a;
q = &b;
int temp;
temp = *p;
*p = *q;
*q = temp;
printf("\n Value after swapping are %d and %d",a,b);
return 0;


}
