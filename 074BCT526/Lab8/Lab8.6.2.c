#include<stdio.h>
int main() {
    char str1[200],str2[200],*s1,*s2;
    printf("Enter a string: ");
    scanf("%[^\n]",str1);
    printf("The string in str1 is: %s",str1);
    printf("\nThe string in str2 before copying is: %s",str2);
    s1=str1,s2=str2;
    while(*s1!='\0') {
        *s2=*s1;
        s1++,s2++;
    }
    printf("\nThe string in str2 after copying is: %s",str2);
    return 0;
}
