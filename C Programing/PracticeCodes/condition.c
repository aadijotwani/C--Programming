#include <stdio.h>

int main()
{
    int num;
    printf("Please enter a number to check wether the given number is prime or not - ");
    scanf("%d", &num);

    for(int i=2; i<=num/2; i++)
    {
        if(num%i==0)
        {
            printf("It is not a prime number");
            break;
        }
        else
        {
            printf("It is a prime number");
            break;
        }
    }
    return 0;
}