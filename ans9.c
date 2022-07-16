//Write a program to print size of an int, a float, a char and a double type variable
#include<stdio.h>
int main(){
    int a;
    float b;
    double c;
    printf("Size of int variable is: %d\n",sizeof(a));
    printf("Size of float variable is: %d\n",sizeof(b));
    printf("Size of double variable is: %d\n",sizeof(c));
    return 0;
}