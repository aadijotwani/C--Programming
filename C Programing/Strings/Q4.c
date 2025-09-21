#include <stdio.h>
#include<string.h>

void main()
{
    char c;
    int count=1;
    char str[200];
    puts("String : ");
    gets(str);

    for(int i=0; str[i] !='\0'; i++)
    {
        if(str[i] == ' ' && str[i+1] != ' ')
        {
            count++;
        }
    }

    printf("%d", count);
}