#include <stdio.h>
#include <string.h>

void main()
{
    int check = 0;
    char str[50];
    gets(str);
    
    for(int i=0; i<strlen(str)/2; i++)
    {
        if(str[i] != str[strlen(str)-i-1])
        {
            check =1;
            break;
        }
    }
    if(check == 0)
    {
        puts("it is a Palindrome");
    }
    else
    {
        puts("It is not a palindrome");
    }
}