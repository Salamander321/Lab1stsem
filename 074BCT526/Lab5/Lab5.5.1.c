#include <stdio.h>
int main(){
for (int i = 0; i < 4;i++){
    for (int j = 3;j > i; j--){
        printf("  ");
    }
    printf("*");
    for(int j = 0; j <= (2*i); j++){
        printf("  ");
    }
    printf("*");
    for (int j = 6;j >= (2*i); j--){
        printf("  ");
    }
    printf("*");

    for(int j = 0; j <= (2*i); j++){
        printf("  ");
    }
    printf("*");
    printf("\n");

}
return 0;
}
