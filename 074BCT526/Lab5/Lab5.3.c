#include <stdio.h>
int main(){
int a,b,temp;
a = 1;b =1;
while (a <=300){
    printf("%d\t",a);
    temp = a + b;
    a = b;
    b = temp;
}
return 0;
}
