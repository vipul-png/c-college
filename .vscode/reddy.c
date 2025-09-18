#include<stdio.h>
int main(){
    int a,b,temp;
    temp=a;
    a=b;
    b=temp;
    printf("enter the value of a");
    scanf("%d", &a);
    printf("enter the value of  b");
    scanf("%d", &b);
    
    printf(" enter the values  after swapping is %d,%d", a, b);
    
}
