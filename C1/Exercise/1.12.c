#include<stdio.h>
#include<math.h>
#define PI 3.1416
int main()
{
    double x1 = 0.0, x2 = 4.0, y1 = 0.0, y2 = 5.0, Radius, Diameter;
    double a = (x2-x1) * (x2-x1);
    double b = (y2-y1) * (y2-y1);

    Diameter = sqrt(a + b);

    Radius = Diameter / 2.0;

    double Circumference = 2 * PI * Radius;
    printf("Circumference is: %lf\n", Circumference);

    double Area = PI * Radius * Radius;
    printf("Area is: %lf", Area);

    return 0;
}

