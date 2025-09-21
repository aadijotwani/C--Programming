#include <stdio.h>

void Fibonacci(int a, int b, int user)
{
    if(a == 0 && b == 1)
    {
        printf("%d ", a);
        printf("%d ", b);
    }
    int next = a+b;
    if(next <= user-2)
    {
        int temp = b;
        b=a+b;
        a = temp;
        printf("%d ", b);
        Fibonacci(a,b,user);
    }
}


void main()
{
    int a = 0, b = 1, user, n;
    puts("Please enter the range for the series to go on: ");
    scanf("%d", &user);

    Fibonacci(a,b,user);
}