//to print pattern like flag of nepal
#include <stdio.h>
int main(){
for (int i = 1; i <=6;i++){
   //printf("|");
    for (int j =1; j <=i;j++){
        printf(" \x2E");
}
//printf("\\");
printf("\n");

}
for (int i = 1; i <=7;i++){
    for (int j =1; j <=i;j++){
        printf(" \x2E");
}
printf("\n");
}
return 0;
}
