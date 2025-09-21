#include <stdio.h>

int main()
{
    int num, rem, rev = 0;
    printf("Please enter a number to reverse it : ");
    scanf("%d", &num);

    while(num != 0)
    {
        rem = num%10;
        rev = rev*10 + rem;
        num /= 10;
    }
    printf("Reversed Number is %d", rev);
    return 0;
}