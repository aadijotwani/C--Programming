#include <stdio.h>
#include <string.h>

int main()
{
    int l;
    char s[50];
    puts("Enter any string ");
    gets(s); // scnaf("%s", s);

   // l = strlen(s);
   for(int i=0; s[i] !=0; i++)
   {
    l++;
   }
    printf("Length of %s is %d", s,l);

    return 0;
}