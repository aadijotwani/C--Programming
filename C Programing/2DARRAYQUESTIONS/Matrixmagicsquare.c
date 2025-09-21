#include <stdio.h>

int main()
{
    int r,c,rowSum=0,colSum=0;
    printf("Please enter the size of the array: ");
    printf("\nNo. of ROWS: ");
    scanf("%d", &r);
    printf("No. of COLUMNS: ");
    scanf("%d", &c);

    int arr[r][c];
    
    printf("Please enter the elements of the array: \n");
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
            colSum += arr[i][j];
        }
    }
    return 0;
}