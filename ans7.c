// Write a program to find the position of first 1 in LSB.
#include <stdio.h>
int main()
{
    int a, count = 1;
    printf("Enter your number:");
    scanf("%d", &a);
    if(a%2==0){
    while ((a & 1)==0)
    {    
        a = a / 2;
            count++;
        if((a&1)==1)
        {
            printf("The position of first 1 in LSB is: %d", count);
        }
    }
    }
    else{
    if ((a & 1) == 1)
    {
        printf("\nThe position of first 1 in LSB is: 1");
    }
}
    return 0;
}