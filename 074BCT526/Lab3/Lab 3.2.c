//Following program displays the output as shown in the question
#include<stdio.h>
int main() {
    float x=3.0,y=12.5,z=523.3,A=300.0,B=1200.5,C=5300.3;
    printf("x\ty\tz=\t%5.1f|\t\t%6.1f|\t\t%6.1f|",x,y,z);
    printf("\nA\tB\tC=\t%5.1f|\t\t%6.1f|\t\t%6.1f|",A,B,C);
    printf("\n-------------------------------------------------------------------");
    printf("\nx\ty\tz=\t|%-6.2f\t\t|%-7.2f\t|%-7.2f",x,y,z);
    printf("\nA\tB\tC=\t|%-6.2f\t\t|%-7.2f\t|%-7.2f",A,B,C);
    return 0;
}
