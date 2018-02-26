#include <stdio.h>
struct test {
    int num;
    char str[50];
};
struct test funtest(struct test);
int main(){
struct test t1,t2;
printf("Enter a number:");
scanf("%d",&t1.num);
printf("Enter a string:");
scanf("%s",t1.str);
t2 = funtest(t1);
printf("After function call number and string are : %d and %s",t2.num,t2.str);
return 0;
}
struct test funtest(struct test t){
struct test t3;
t3.num = t.num *10;
strcpy(t3.str,t.str);
strcat(t3.str,"hub");
return t3;
}
