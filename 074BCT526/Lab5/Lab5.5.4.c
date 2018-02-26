#include <stdio.h>>
int main(){
int count = 1;
int start;
for(int j = 5;j > 0;j--){
    int diff = 5;
    start = count;
    for(int i = 0; i < j;i++){
        printf("%d\t",start);
        start = start + diff;
        diff -=1;
    }
    ++count;
    printf("\n");
}
return 0;
}
