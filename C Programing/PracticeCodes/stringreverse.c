#include <stdio.h>

void main()
{
    int l;
    char c[10];
    printf("Please enter a word to reverse its characters : ");
    scanf("%s", c);
    
    for(int i=0; c[i] !=0; i++)
    {
        l++;
    }
    printf("lentgh = %d", l);

    for(int i=0; i<(l/2); i++)
    {
        char temp = c[i];
        c[i] = c[(l-1)-i];
        c[(l-1)-i] = temp;
    }

    printf("\n%s",c);
}