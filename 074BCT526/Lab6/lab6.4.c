//program to print fibo series using recursive method.
#include <stdio.h>
int fibo(int n);
int main(){
for (int i = 1; i < 10; i++){
    printf("%d\t",fibo(i));
}
return 0;
}
int fibo(int n){
if (n < 2)
    return n;
else
    return fibo(n-1) + fibo(n-2);
}

