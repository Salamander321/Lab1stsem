#include<stdio.h>
int main() {
    char str1[200],str2[200];
    printf("Enter first string: ");
    scanf("%[^\n]",str1);
    getchar();
    printf("Enter second string: ");
    scanf("%[^\n]",str2);
    strcat(str1,str2);
    printf("The concatenated string is: %s",str1);
    return 0;
}
