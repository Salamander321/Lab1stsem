#include <stdio.h>
#include <math.h>
struct cartesian {
int x;
int y;
};
int main(){
struct cartesian P1,P2;
printf("Enter a coordinate of one point:");
scanf("%d,%d",&P1.x,&P1.y);
printf("Enter a coordinate of another point:");
scanf("%d,%d",&P2.x,&P2.y);
float distance = sqrt(pow((P1.x-P2.x),2)+pow((P1.y-P2.y),2));
printf("Distance between them is : %0.4f",distance);
return 0;

}
