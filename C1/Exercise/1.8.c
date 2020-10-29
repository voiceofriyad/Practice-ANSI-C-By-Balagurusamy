#include<stdio.h>
int main()
{
    int a = 250, b = 85, c = 25;
    int x = a / (b - c);
    printf("Value of x is: %d\n", x); /*Execute 1st part*/

    a = 300, b = 70, c = 70;
    x = a / (b - c);
    printf("Value of x is: %d", x); /*Execute 2nd part, can't divide by 0*/


}
