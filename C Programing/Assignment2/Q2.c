#include <stdio.h>

int main()
{
    int num, sum;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    while(num !=0)
    {
        sum += num%10;
        num /= 10;
    }

    printf("Sum is = %d",sum);

    return 0;
}