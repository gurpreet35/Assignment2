//Assume price of 1 USD is INR 76.23. Write a program to take
// the amount in INR and convert it into USD.
#include<stdio.h>
int main(){
    float INR;
    printf("Enter the ammount in INR:");
    scanf("%f",&INR);
    printf("Price of %f into USD is:%f",INR,INR*76.23);
    return 0;
}

