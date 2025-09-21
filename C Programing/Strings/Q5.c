#include <stdio.h>
#include <string.h>

void main()
{
    char str[50];
    printf("Please enter a string:");
    gets(str);

    for(int i=0; i<strlen(str)/2; i++)
    {
        char temp = str[i];
        str[i] = str[strlen(str)-i-1];
        str[strlen(str)-i-1] = temp;
    }

    puts(str);
}
