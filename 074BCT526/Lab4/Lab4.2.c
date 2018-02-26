/* to find whether inputed character is Vowel or Consonant*/
#include <stdio.h>
int main(){
char a;
printf("Enter a alphabet");
scanf("%c" , &a);
switch(a){
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
case 'A':
case 'E':
case 'I':
case 'O':
case 'U':
    printf("It is vowel");
    break;
default:
    printf("It is consonant");
}

return 0;


}
