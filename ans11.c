//Write a program to input a number from the user and also input a digit.
//Append a digit in the number and print the resulting number.
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the Number:");
    scanf("%d",&a);
    printf("Enter the digit:");
    scanf("%d",&b);
    printf("%d%d",a,b);
    b=b*10+a;
    printf("resukt is:%d",b);
    return 0;
}