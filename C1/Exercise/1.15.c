#include<stdio.h>
int main()
{
    int x = 50, y = 28, sum, difference, product, division;

    sum = x + y;
    difference = x - y;
    product = x * y;
    division = x / y;

    printf("x = %d          y = %d\n",x,y);
    printf("sum = %d        difference = %d\n",sum,difference);
    printf("product = %d    division = %d\n",product,division);

    return 0;
}
