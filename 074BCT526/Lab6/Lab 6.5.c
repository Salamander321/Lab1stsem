//Following program illustrates the differences between local, global and static variables
#include<stdio.h>
void increment(int);
void variable(void);
int global;
static int a;
int main() {
    int local,n=1;
    printf("Enter the value of global: ");
    scanf("%d",&global);
    printf("Enter the value of local: ");
    scanf("%d",&local);
    printf("The value of global in main(): %d",global);
    printf("\nThe value of local in main(): %d",local);
    increment(n);
    increment(n+1);
    increment(n+2);
    variable();
    printf("\n%d",++a);
    printf("\n%d",++a);
    return 0;
}

void increment(int n) {
    static int stat;
    int nonstat;
    stat++,nonstat++;
    printf("\nThe value of static int in %d call is: %d",n,stat);
    printf("\nThe value of auto int in %d call is: %d",n,nonstat);
    return;
}

void variable() {
    int local;
    printf("\nThe value of global in  variable() is: %d",global);
    printf("\nThe value of local in variable() is: %d",local);
    return;
}
