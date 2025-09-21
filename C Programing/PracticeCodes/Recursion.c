#include <stdio.h>

void add(int a);

void add(int a)
{
    if(a != 0)
    {
        
        printf("%d ", a);
        add(a-1);
        printf(" %d", a);
    }
}



void main()
{
    int a = 5;
    add(a);
}