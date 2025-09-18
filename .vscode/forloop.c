//syntax
//for (initialization; condition; increment/decrement) {
    // code block to be executed

#include<stdio.h>
int main(){
    int i,n;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d\n",i);
    }
}