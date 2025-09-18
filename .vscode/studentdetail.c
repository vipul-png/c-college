#include<stdio.h>
int  main(){
    char Sname[20];
    int age;
    int roll_no;
    printf("Enter your name:");
    scanf("%s",Sname);
    printf("Enter your age:");
    scanf("%d",&age);
    printf("Enter your roll no");
    scanf("%d",&roll_no);

    printf("\nName:%s",Sname);
    printf("\nAge:%d",age);
    printf("\nroll no:%d",roll_no);
    return 0;

}