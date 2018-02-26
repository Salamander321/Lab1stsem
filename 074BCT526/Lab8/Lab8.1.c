#include <stdio.h>
int main(){
int *p,*q,*r;
int a,b,c;
printf("Enter any 3 numbers : ");
scanf("%d %d %d",&a,&b,&c);
p = &a;
q = &b;
r = &c;
if (*p > *q && *p >*r)
    printf("Greatest number is : %d",*p);
else if (*q > *p && *q > *r)
    printf("Greatest number is : %d",*q);
else if (*r > *q && *r > *p)
    printf("Greatest number is : %d",*r);
else
    printf("You have entered same numbers");
return 0;


}
