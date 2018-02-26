//Following program checks whether the input character is number, alphabet, special charater and one of the charater functions
#include<stdio.h>
#include<conio.h>
int main() {
    char c;
    printf("Enter a character: ");
    scanf("%c",&c);
    if((c>='A' && c<='Z') || (c>='a' && c<='z'))
        printf("It is an alphabet");
    else if(c>='0' && c<='9')
        printf("\nIt is a number");
    else
        printf("\nIt is a special character");
    if(isalnum(c))
        printf("\nIt is an alphanumeric character");
    else
        printf("\nIt is not an alphanumeric character");
    if(isblank(c))
        printf("\nIt is a blank character");
    else
        printf("\nIt is not a blank character");
    if(isalpha(c))
        printf("\nIt is an alphabetic character");
    else
        printf("\nIt is not an alphabetic character");
    if(iscntrl(c))
        printf("\nIt is a control character");
    else
        printf("\nIt is not a control character");
    if(isdigit(c))
        printf("\nIt is a number-digit");
    else
        printf("\nIt is not a number-digit");
    if(isupper(c))
        printf("\nIt is an upper case character");
    else
        printf("\nIt is not an upper case character");
    if(islower(c))
        printf("\nIt is a lower case character");
    else
        printf("\nIt is not a lower case character");
    if(isxdigit(c))
        printf("\nIt is a hexadecimal digit");
    else
        printf("\nIt is not a hexadecimal digit");
    if(isgraph(c))
        printf("\nIt is a graphical character");
    else
        printf("\nIt is not a graphical character");
    return 0;
}
