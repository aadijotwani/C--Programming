//Write a program to check whether the given number is odd or even
#include <stdio.h>

int main()
{
    int num;
    printf("Please enter a number : ");
    scanf("%d", &num);

    if(num%2==0)
        printf("Number is even");
    
    else
        printf("Number is odd");
    return 0;
}