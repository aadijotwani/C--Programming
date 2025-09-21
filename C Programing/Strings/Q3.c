#include <stdio.h>
#include<string.h>

void main()
{
    char c;
    char str1[200];
    char str2[200];
    puts("String 1: ");
    gets(str1);
    puts("String 2: ");
    gets(str2);
    char str3[200];

    puts("Length of 2 strings is : ");
    printf("string1 = %d and string2 = %d", strlen(str1), strlen(str2));

    
    strcat(str1,str2);
    printf("\nConcated string is: %s", str1);

    
    strcpy(str3,str1);
    printf("\nCoppied string is: %s", str3);


}