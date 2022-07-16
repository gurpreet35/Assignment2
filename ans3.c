//Write a program to swap values of two int variables
#include<stdio.h>
int main(){
    int a,b,temp;
    printf("enter a first number:");
    scanf("%d",&a);
    printf("enter a second number:");
    scanf("%d",&b);
    printf("first num: %d, Second num: %d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("Swap values:\n");
     printf("first num: %d, Second num: %d",a,b);
    
    return 0;
}
