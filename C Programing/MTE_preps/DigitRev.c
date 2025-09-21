#include <stdio.h>
#include <math.h>

int main()
{
    int num, sum = 0;
    scanf("%d", &num);

    while(num != 0)
    {
        int n = num%10;
        int cal = n*pow(10,n-1);
        sum += cal;
        num/= 10;
    }
    printf("the new number is %d", sum);
}

//1234
//4xpower(10,n-1)
//