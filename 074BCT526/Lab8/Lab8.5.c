#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
char s[100];int len;
char *imp;
printf("Enter a sentences: ");
scanf("%[^\n]",s);
len = strlen(s);
imp = (char*) malloc(len * sizeof(char));
int count = 0;
for (int i = 0; i < len; i++){
    if (s[i]== '.')
        s[i] = ':';
    if (s[i] != 32)
        imp[count++] = s[i];
}

printf("%s",imp);
return 0;



}
