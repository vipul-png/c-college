#include<stdio.h>
int main(){
int i,j;
for(i=1;i<=5;i++){
    for(j=1;j<=i;j++)
    {
        printf("%11d",j);
    }
    printf("\n");
}
for(j=4;j>=1;j--){
    for(i=1;i<=j;i++)
    {
        printf("%11d",i);
    }
    printf("\n");
}
}