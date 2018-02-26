#include <stdio.h>
 struct company {
char name[50];
char address [50];
long long int num;
int no;
};
void display (struct company*);
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
display (&c1);
}
void display (struct company *C){
printf("\nName of company: %s",C->name);
printf("\nAddress of company: %s",C->address);
printf("\nNumber of company: %lld",C->num);
printf("\nNumber of employee of company: %d",C->no);

}
