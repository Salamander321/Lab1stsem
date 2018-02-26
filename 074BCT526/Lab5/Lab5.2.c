//to find LCM and GCD
#include <stdio.h>
int main(){
int a,b,LCM,GCD,temp;
printf("Enter any 2 two numbers : \n");
scanf("%d %d",&a,&b);
GCD = 1;
if (a<b){
    temp = a;
    a = b;
    b = temp;
   }
for (int i = b; i > 0;i-- ){
    if ((a % i == 0) && (b % i == 0)){
        GCD = i;
        break;
    }
}
LCM = (a*b)/GCD;
printf("LCM and HCF are :- %d and %d\n",LCM,GCD);
}
