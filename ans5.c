//Write a program to input a three-digit number and display the sum of the digits.
#include<stdio.h>
int main(){
    int a,b,c,sum=0;
    printf("Ener your three digit number:");
    scanf("%d",&a);
    b=a/10;
    sum+=a%10;
    c=b/10;
    sum+=b%10+c%10;
    printf("sum of three digit %d is :%d",a,sum);
    return 0;
}