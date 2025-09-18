#include<stdio.h>

int main() {
    int a=1, b=0;
    printf("the result of a and b is %d",a&&b);//for and operator both a and b must be true(1) to give true as an output
    printf("\nthe result of a or b is %d",a||b);//for or operator either a or b must be true to give true as an output,false(0)
    printf("\nthe value of not(a) is %d",!a);//not operator reverses true to false and false to true
    return 0;
}