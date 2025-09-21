#include <stdio.h>

int main()
{
    int num;
    printf("Please enter a 4 digit number : ");
    scanf("%d", &num);

    int th = num/1000;
    int hun = (num/100)%10;
    int tens = (num/10)%10;
    int ones = num%10;

    printf("sum = %d", th+hun+tens+ones);
    return 0;
}