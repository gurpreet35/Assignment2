//Write a program to print a given number without its last digit.
#include<stdio.h>
int main(){
    int a;
    printf("enter a number:");
    scanf("%d",&a);
    printf("%d without its last digit: %d",a,a/10);
    return 0;
}