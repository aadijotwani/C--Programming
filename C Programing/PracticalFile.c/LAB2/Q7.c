#include <stdio.h>

int main()
{
    int n1 = 12, n2 = 24;
    int temp;
    printf("n1 = %d \nn2 = %d",n1,n2);

    temp = n1;
    n1 = n2;
    n2 = temp;

    printf("\n n1 = %d \n n2 = %d",n1,n2);

    return 0;
}