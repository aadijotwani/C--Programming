#include <stdio.h>

void main()
{
    char s1[10] = "ABCDEFGHIJ";
    char s2[10] = "KLMNOPQR";
    
    char s3[20]; 
    int i = 0, j = 0;

    for(i=0; s1[i] != '\0'; i++) 
    {
        s3[i] = s1[i];
    }

    for(j=0; s2[j] != '\0'; j++) 
    {
        s3[i] = s2[j];
        i++;
    }
    printf("%s", s3);
}