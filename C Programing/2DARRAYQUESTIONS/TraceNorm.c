#include <stdio.h>
#include <math.h>

int main()
{
    int r,c,trace = 0;
    float norm = 0;
    printf("Please enter the size of the matrix: \n");
    printf("ROWS = ");
    scanf("%d", &r);
    printf("COLUMNS = ");
    scanf("%d", &c);

    printf("\nPlease enter the elements of the matrix: ");
    int arr[r][c];
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            if(i==j)
            {
                trace += arr[i][j];

            }
            norm += (pow(arr[i][j],2));

        }
        
    }
    norm = sqrt(norm);
    printf("Trace = %d", trace);
    printf("\nNorm = %f", norm);
    return 0;
}