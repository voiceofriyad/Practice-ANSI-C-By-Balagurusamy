#include<stdio.h>
#include<math.h>
int main()
{
    double a = 10.00, b = 25.00, c = 56.00;
    double s = (a + b + c) / 2;
    double area = sqrt(s * (s-a) * (s-b) * (s-c));

    printf("Area of the Triangle is: %lf", area);
    return 0;
}
