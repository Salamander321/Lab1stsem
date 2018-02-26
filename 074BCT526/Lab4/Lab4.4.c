/*to find whether given number is multiple of 5,
and divisible by 7 but not by 11 or not*/
#include <stdio.h>
int main(){
int num;
printf("Enter a number: ");
scanf("%d",&num);
if (num %5 == 0)
    printf("It is multiple of 5 \n");
else
    printf("It is not multiple of 5 \n");
if (num  % 7 == 0 && num % 11 !=0)
    printf("It is divisible by 7 but not by 11");
else
    printf("It is not divisible by 7 or by 11");
return 0;
}




