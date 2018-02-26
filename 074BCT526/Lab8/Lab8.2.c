#include <stdio.h>
#include <stdlib.h>
int main(){
int *p;
int n;
int sum = 0;
printf("Enter a number of element you want to enter :");
scanf("%d",&n);
p = (int*) calloc(n , sizeof(int));
 if(p == NULL)
    {
        printf("Error! memory not allocated.");
        exit(0);
    }
for (int i = 0; i < n; i++){
    printf("Enter a element : ");
    scanf("%d",(p + i));
    sum += *(p + i);
}
printf("Sum of all element is %d",sum);

return 0;
}
