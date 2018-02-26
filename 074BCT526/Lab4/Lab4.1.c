//to print greatest and smallest along with identification of odd or even
//3 inputed numbers.
#include <stdio.h>
int main(){
int num1,num2,num3,grstnum,smlstnum;
printf("Enter any three number\n");
scanf("%d %d %d",&num1,&num2,&num3);
if ( (num1 > num2) && (num1 > num3))
    grstnum = num1;
else if ((num2 > num1) && (num2 > num3))
    grstnum = num2;
else if ((num3 > num1)&&(num3 > num2))
    grstnum = num3;
else{
    printf("You have entered wrong number\n");
    exit(1);
}
if ((num1 < num2) && (num1 < num3))
    smlstnum = num1;
else if ((num2 < num1) && (num2 < num3))
    smlstnum = num2;
else if ((num3 < num1) && (num3 < num2))
    smlstnum = num3;
else
    printf("You have entered same number");
if (grstnum % 2 == 0)
    printf("greatest num is %d and it is even",grstnum);
else
    printf("greatest num is %d and it is odd",grstnum);
if(smlstnum % 2 == 0)
    printf("Smallest num is %d and it is even ",smlstnum);
else
    printf("Smallest num is %d and it is odd",smlstnum);
return 0;










}
