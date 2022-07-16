//Write a program which takes a character as an input and displays its ASCII code.
#include<stdio.h>
int main(){
    char m;
    printf("Enter your character:");
    scanf("%c",&m);
    printf("The ASII code of %c is %d",m,m);
    return 0;
}