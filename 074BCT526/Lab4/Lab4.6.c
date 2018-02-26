//to find root of quadratic equation
#include <stdio.h>
#include <math.h>
int main(){
int a,b,c;
float x1,x2,d,z,w;
printf("Enter a b c of equation ");
scanf("%d %d %d",&a,&b,&c);
d = (b*b) - 4 *a *c;
if (d < 0){
        z = - b/(2*a);
        w = sqrt(-d)/(2*a);
    printf("Roots of equations are %0.1f + %0.1fi and %0.1f - %0.1fi\n",z,w,z,w);
}
else
{
    x1 = (- b + sqrt(d))/(2*a);
    x2 = (- b - sqrt(d))/(2*a);
    printf("Roots are %1.1f and %1.1f" , x1,x2);
}
return 0;

}
