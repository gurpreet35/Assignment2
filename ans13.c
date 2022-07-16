//Write a program to take a three-digit number from the user and
//rotate its digits by one position towards the right
#include<stdio.h>
int main(){
    int num,a,b,c,temp;
    printf("Enter three-digit Number:");
    scanf("%d",&num);
    a=num/100;
    b=(num%100)/10;
    c=(num%10)/1;
    temp=a;
    a=b;
    b=c;
    c=temp;
    printf("rotation of %d by one position towards the right: %d\n",num,a*100+b*10+c*1);
    return 0;
}