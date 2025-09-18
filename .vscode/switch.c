#include <stdio.h>
int main()
{
    int a, b, c = 0, ch;
    printf("Enter the two numbers");
    scanf("%d%d", &a, &b);
    printf("press\n1.Addition\n2.Substraction\n3.multiplication\n4.Division");

    printf("\nEnter your choice");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        c = a + b;
        printf("Addition is %d", c);
        break;
    case 2:
        c = a - b;
        printf("Substraction is %d", c);
        break;
    case 3:
        c = a * b;
        printf("Multiplication is %d", c);
        break;
    case 4:
        c = a / b;
        printf("Division is %d", c);
        break;
    default:
        printf("Invalid choice");
    }
}