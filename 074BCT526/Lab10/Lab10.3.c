#include <stdio.h>
int main()
{
    FILE *fpr;
    fpr = fopen("lab2.txt","w+");
    if (fpr == NULL)
    {
        printf("File cannot be opened");
        exit(1);
    }
    char s[40],c[40];
    printf("Enter a string :");
    scanf("%[^\n]",s);
    fputs(s,fpr);
    rewind(fpr);
    while (fgets(c,strlen(s),fpr) != NULL)
    {
        printf("%s",c);
    }

    fclose(fpr);
}
