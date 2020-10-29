#include<stdio.h>

int add(int a, int b)
{
    int p;
    p = a + b;
    return p;
}

int sub(int a, int b)
{
    int p;
    p = a - b;
    return p;
}

int main()
{
    printf("%d + %d = %d\n", 20, 10, add(20,10));
    printf("%d - %d = %d", 20, 10, sub(20,10));

    return 0;
}
