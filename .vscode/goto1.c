//printing table of a number using goto conditional statement
#include<stdio.h>
int main(){
    int n,i=1;
    printf("Enter the number");
    scanf("%d",&n);
    xyz:
    printf("\n%d * %d = %d",n,i,n*i);
    {
        i++;
        if(i<=10)
        goto xyz;
    }
    return 0;
}
