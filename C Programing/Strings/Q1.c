#include <stdio.h>
#include <string.h>

void main()
{
    char c[50];
    printf("Please enter a word :");
    scanf("%s", c);
    printf("%s", strupr(c));
    
    for(int i=0; c[i] !='\0'; i++)
    {
        if(c[i]>=65 && c[i] <= 90)
        {
            c[i] += 32;
        }
        else if(c[i]>=97 && c[i] <= 122)
        {
            c[i] -= 32;
        }
    }

   // printf("The New word after conversion is : %s",c);




    
}