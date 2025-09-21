#include <stdio.h>

int main()
{
    int a = 5; 
    int *p;
    p = &a;

    printf("%u", a);
    printf("\n%u", &a);
    printf("\n%u", p);
    printf("\n%u", &p);

    return 0;
}