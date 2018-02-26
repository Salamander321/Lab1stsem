#include <stdio.h>
int main (){
float arr[10];
float great = 0;
printf("Enter 10 float numbers");
for (int i = 0; i < 10; i++){
        scanf("%f",&arr[i]);
        if (arr[i]>great)
            great = arr[i];

}
float small = arr[0];
for (int i = 0; i < 10; i++){
    if (arr[i]<small)
            small = arr[i];
}
printf("Greatest and Smallest Elements are %f and %f.",great,small);
return 0;
}

