// to reverse given number
#include <stdio.h>
int main(){
int num,rev = 0;
printf("Enter a integer ");
scanf("%d", &num);
while (num != 0){
    rev = rev*10 + num%10;
    num /= 10;

}
printf("Reverse order is %d",rev);
return 0;
}
