#include <stdio.h>

int main()
{
    int a = 10, b = 7, c = 4;

    if (a >= b && a >= c)
    {
        printf("The largest number is %d", a);
    }
    else if (b >= a && b >= c)
    {
        printf("The largest number is %d", b);
    }
    else
    {
        printf("The largest number is %d", c);
    }
    return 0;
}