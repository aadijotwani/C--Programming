#include <stdio.h>

void fact(int n, int k)
{
    if(n != 0)
    {
        k *= n;
        fact(n-1,k);
    }
    else
    {
        printf("%d", k);
    }
}

void main()
{
    int n = 5;
    int k = 1;
    fact(n,k);
}