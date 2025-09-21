#include <stdio.h>

int main() 
{
    int count = 0, temp = 1;

    for(int i = 0; i < 5; i++)
    {
        int rowStart = temp;   // save current row's starting number
        count = rowStart;
        int countn = 0;
        for(int j = 0; j <= i; j++)
        {
            printf("%d ", count);
            count += 2;
        }

        printf("\n");

        // Set temp for next row's starting number
        temp = rowStart + ;
    }

    return 0;
}
