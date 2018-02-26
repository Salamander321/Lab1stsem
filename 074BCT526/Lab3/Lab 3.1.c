//Following program displays the output as shown in the question
#include<stdio.h>
int main() {
    int x=6,y=3;
    printf("x\ty\texpressions\tresults\n%d|\t%d|\tx=y+3\t\t",x,y);
    printf("|x=%d\n%d|\t%d|\tx=y-2\t\t|x=%d\n%d|\t%d|\tx=y*5\t\t",y+3,x,y,y-2,x,y);
    printf("|x=%d\n%d|\t%d|\tx=x/y\t\t|x=%d\n%d|\t%d|\tx=x%y\t\t|x=%d",y*5,x,y,x/y,x,y,x%y);
    return 0;
}
