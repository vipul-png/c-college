#include <stdio.h>

int main()
{
    int a = 89, b = 98, c = 67;
    if (a >= b)
    {
        if (a >= c)
            printf("the largest number is %d", a);
        else
            printf("the largest number is %d", c);
    } 
    else
    {
        if (b >= c)
            printf("the largest number is %d", b);
        else
            printf("the largest number is %d", c);
    }
    
}