#include <stdio.h>
int main(){
printf("Enter a no. of character you want to enter\n");
int n;
scanf("%d",&n);
char *string;
string = (char*)malloc(n * sizeof(char));
printf("Enter a string \n");
scanf("%s",string);
int check = 0;
--n;

for (int i = 0;i <= n ;i++){
    //printf("%c\t%c\n",string[i],string[n-i]);
    if (string[i] != string[n-i]){
           check = 1;
           break;
    }
}
if (check == 1)
    printf("\nIt is not palindrome");
else
    printf("\nIt is palindrome");
return 0;
}
