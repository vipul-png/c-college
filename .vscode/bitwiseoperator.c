#include <stdio.h>

int main(){

    printf("Enter the two numbers:");
    int a, b;
    scanf("%d%d", &a, &b);

    printf("Bitwise AND: %d\n", a & b);
    printf("Bitwise OR: %d\n", a | b);
    printf("Bitwise XOR: %d\n", a ^ b);
    printf("Bitwise NOT: %d\n", ~a);
    printf("Bitwise Left Shift: %d\n", a << 2);
    printf("Bitwise Right Shift: %d\n", a >> 2);
   return 0;
}