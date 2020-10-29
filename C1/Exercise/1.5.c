#include<stdio.h>
#define PI 3.1416
int main()
{
    double radius, area;
    radius = 5;
    area = PI * radius * radius;
    printf("Area of this circle is: %.3lf", area);

    return 0;
}
