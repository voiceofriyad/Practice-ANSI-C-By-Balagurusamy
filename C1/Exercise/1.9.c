#include<stdio.h>
int main()
{
    double c,f;
    printf("Enter the value of Celsius: ");
    scanf("%lf", &c);
    f = (c * 1.8) + 32;
    printf("Value of Fahrenheit is: %0.2lf\n", f);


    c = (f - 32) / 1.8;
    printf("Value of Celsius is: %0.2lf", c);

    return 0;

}
