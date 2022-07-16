//Write a program to swap values of two int variables without using a third variable.
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    printf("first num: %d, Second num: %d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swaping\n");
    printf("first num: %d, Second num: %d\n",a,b);
    return 0;



}