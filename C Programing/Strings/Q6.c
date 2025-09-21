#include <stdio.h>

void main()
{
    char str[50];
    int len = 0;

    printf("Please enter a word :");
    gets(str);

    for(int i=0; str[i] != '\0'; i++)
    {
        len++;
    }

    printf("%d", len);
}

    