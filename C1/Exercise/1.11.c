#include<stdio.h>
#include<math.h>
int main()
{
    int x1 = 20, x2 = 50, y1 = 5, y2 = 9, d;
    int a = (x2-x1) * (x2-x1);
    int b = (y2-y1) * (y2-y1);

    d = sqrt(a + b);
    printf("Distance is: %d", d);
    return 0;
}
