#include <stdio.h>
//0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 
//first 2 numbers are fixed.
void series(int,int,int,int);

void series(int f, int s, int n, int user)
{
    if(n != user-2)
    { 
        int count = f + s;
        printf(" %d", count);
        f = s;
        s = count;
        n++;
        series(f,s,n, user);
    }
}

void main()
{
    int f = 0, s = 1, n = 0, user;
    printf("Please enter end point of series : ");
    scanf("%d", &user);
    printf("\n%d %d", f,s, user);
    series(f,s,n,user);
}