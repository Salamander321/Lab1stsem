//to find sum between numbers of two numbers.
#include <stdio.h>
int main(){
printf("Enter a two number\n");
int a,b,temp,sum;
sum = 0;
scanf("%d %d",&a,&b);
if (a>b){
    temp = a;
    a = b;
    b = temp;
}
for (int i = a+1; i < b;i++){
    if (i % 2 == 0)
        sum+=i;
}
printf("The sum of no. is %d",sum);
return 0;
}
