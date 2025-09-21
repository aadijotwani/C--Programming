#include <stdio.h>

int main()
{
    int n1 = 12, n2 = 34;
    printf("n1 = %d \nn2 = %d",n1,n2);

    n1 = n1+n2;
    n2 = n1-n2;
    n1 = n1-n2;

    printf("\n n1 = %d \n n2 = %d",n1,n2);

    return 0;
}