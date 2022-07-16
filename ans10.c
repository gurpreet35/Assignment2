//Write a program to make the last digit
// of a number stored in a variable as zero.
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the Number:");
    scanf("%d",&a);
    b=a/10;
    printf("The last digit of a %d stored in a variable as zero: %d",a,b*10);
    return 0;
}