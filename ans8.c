//Write a program to check whether the given number is even or odd using a bitwise 
//operator
#include<stdio.h>
int main(){
    int a ;
    printf("Enter your number:");
    scanf("%d",&a);
    (a&1)==0?printf("%d  is even number",a):printf("%d is odd number",a);
    return 0;
}