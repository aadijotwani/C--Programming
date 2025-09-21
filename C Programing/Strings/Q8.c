#include <stdio.h>
#include <string.h>

void pattern()
{
    printf("* ");
    pattern();
}

void main()
{
    pattern();
}