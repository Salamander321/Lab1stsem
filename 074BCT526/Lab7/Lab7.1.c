#include <stdio.h>
int main (){
float arr[10];
printf("Enter 10 float numbers");
for (int i = 0; i < 10; i++){
        scanf("%f",&arr[i]);

}
for (int i = 0;i <10;i ++){
    printf("%f\t",arr[i]);
}
return 0;
}
