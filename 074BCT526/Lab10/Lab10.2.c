#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    FILE *fptr;char ch,s[200];int num;
    fptr = fopen("lab101.txt","r");
    if (fptr == NULL){
        printf("File doesn't exist");
        exit(1);
    }
    else{
        printf("The content of file are:\n");
        ch = fgets(s,200,fptr);
    }
    printf("%s",s);
    num = strlen(s);
    printf("\nThe number of character in file is %d",num);
    fclose(fptr);
    return 0;
}
