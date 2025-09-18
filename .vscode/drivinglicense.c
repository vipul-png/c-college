#include <stdio.h>

int main(){
   int age;
   printf("Enter your age:");
   scanf("%d",&age);
   if(age>=18){
    printf("you are eligible to drive");
   }
   else if(age>=50){
    printf("you are an adult and eligible to drive");
   }
   else(age<18){
    printf("you cannot drive");
   }
   return 0;
}