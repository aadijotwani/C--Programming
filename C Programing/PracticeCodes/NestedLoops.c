#include <stdio.h>

void main()
{
    for(int r = 0; r<=3; r++)
    {
        for(int c = 0; c<=r; c++)
        {
            printf("%d ",3-c);
        }
        printf("\n");
    }
}