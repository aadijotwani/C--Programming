#include <stdio.h>

void main()
{
    char c;
    int index;
    char str[200];
    gets(str);

    puts("Please enter a charecter to find its last occurence in the string");
    scanf("%c", &c);

    for(int i=0; str[i] != '\0'; i++)
    {
        if(c == str[i])
        {
            index = i;
        }
    }
    printf("Last occurence of %c is at %d in %s", c,index,str);
}