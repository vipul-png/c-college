#include<stdio.h>
int main(){
    int length,breadth;
    printf("Enter the length:");
    scanf("%d",&length);
    printf("Enter the breadth:");
    scanf("%d",&breadth);
    printf("the area of the rectangle is:%d",length*breadth);
    printf("\nthe perimeter of the rectangle is:%d",2*(length+breadth));
    return 0;
}