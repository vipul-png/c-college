#include<stdio.h>

int main()
{
    int s1,s2,s3,s4,s5;
    printf("enter the five subjects marks");
    scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
    double per=(s1+s2+s3+s4+s5)/5;
    printf("\npercentage is %.2lf",per);
    if(per>=90)