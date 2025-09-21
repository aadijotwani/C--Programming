#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int sum = (num / 1000) + (num % 1000) / 100 + (num % 100) / 10 + (num % 10);
    printf("Sum of digits: %d\n", sum); // Added a newline character for better readability
    return 0;
}
