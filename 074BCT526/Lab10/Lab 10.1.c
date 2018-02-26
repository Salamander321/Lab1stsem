#include <stdio.h>
#include <stdlib.h>
int main(){
FILE *fptr;char ch;
fptr = fopen("lab101.txt","w");
if (fptr == NULL)
{
    printf("File cannot be opened");
    exit(1);
}
else{
    printf("Enter the content of the file \n");
    while ((ch = getc(stdin))!= '\n'){
        fputc(ch,fptr);
    }
    fclose(fptr);
}


return 0;
}
