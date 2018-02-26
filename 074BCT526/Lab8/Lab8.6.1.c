#include<stdio.h>
#include<string.h>
int main() {
    char str1[200],str2[200];
    printf("Enter a string: ");
    scanf("%[^\n]",str1);
    printf("The string in str1 is: %s",str1);
    printf("\nThe string in str2 before copying is: %s",str2);
    strcpy(str2,str1);
    printf("\nThe string in str2 after copying is: %s",str2);
    return 0;
}
