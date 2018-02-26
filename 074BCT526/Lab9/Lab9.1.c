#include <stdio.h>
 struct company {
char name[50];
char address [50];
long long int num;
int no;
};
int main(){

struct company c1;
printf("Enter a name of company:");
scanf("%s",c1.name);
printf("Enter address of company:");
scanf("%s",c1.address);
printf("Enter number of company:");
scanf("%lld",&c1.num);
printf("Enter no. of employee of company:");
scanf("%d",&c1.no);
printf("\nName of company: %s",c1.name);
printf("\nAddress of company: %s",c1.address);
printf("\nNumber of company: %lld",c1.num);
printf("\nNumber of employee of company: %d",c1.no);
return 0;
}
