#include<stdio.h>
int main(){
    float price[3];
    printf("Enter the price of items:");
    scanf("%f%f%f",&price[0],&price[1],&price[2]);

    printf("the total price of 1st item is:%.2f\n",price[0]+price[0]* 0.18);
    printf("the total price of 2nd item is:%.2f\n",price[1]+price[1]* 0.18);
    printf("the total price of 3rd item is:%.2f\n",price[2]+price[2]* 0.18);
    return 0;
}