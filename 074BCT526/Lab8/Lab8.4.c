#include <stdio.h>
int main(){
    char c;
    int cha = 0,word = 1;
while ((c = getchar())!='\n'){
    if (c != ' ')
        cha++;
    else
        word++;
}
printf("No. of characters and words are %d and %d ",cha,word);
return 0;

}
