//Area of ellipse having minor axis 4cm and major axis 6cm//
#include <stdio.h>
#define PI 3.14
int main()
{
    int a, b;
    float area;
    a = 6;
    b = 4;
    area = PI*a*b;
    printf("The area of ellipse having minor axis 4cm and major axis 6cm is %f cm^2", area);
    return 0;
}
