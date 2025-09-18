#include <stdio.h>

int main()
{

    char sname[20];
    int roll_no;

    printf("enter the students name");
    scanf("%s", sname);
    printf("enter the roll number");
    scanf("%d", &roll_no);

    printf("\nThe name is %s", sname);
    printf("\nthe roll no is %d", roll_no);

    
}