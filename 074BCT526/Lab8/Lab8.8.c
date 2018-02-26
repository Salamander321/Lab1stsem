#include<stdio.h>
int main() {
    char str1[200],str2[200];
    int cmp;
    printf("Enter first string: ");
    scanf("%[^\n]",str1);
    getchar();
    printf("Enter second string: ");
    scanf("%[^\n]",str2);
    cmp=strcmp(str1,str2);
    if(cmp==0)
        printf("The strings are same");
    else
        printf("The strings are not same");
    return 0;
}
