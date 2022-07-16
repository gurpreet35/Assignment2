//Write a program to print unit digit of a given number
#include<stdio.h>
int main(){
    int a;
    printf("enter a number:");
    scanf("%d",&a);
    printf("unit digit of %d is %d",a,a%10);
    return 0;
}