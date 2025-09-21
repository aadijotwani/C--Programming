#include <stdio.h>

void pattern(int a, int b,int i)
{
    if(a != b)
    {
        if(a>0)
        {
            printf("* ");
            pattern(a-1,b, i+1);
        }
        else
        {
            printf("\n");
            pattern(a+i,b,1);
        }
    }
}



void change(int* p)
{
    *p = *p + 10;
}

void main()
{
    //int a = 1, b = 5;
    //pattern(a,b,1);
    int x[][1] = {(1,2),(3,4)};

    int *p;
    p = &x[0];
    printf("x afterchange==%d",*p);

}