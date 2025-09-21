#include <stdio.h>

int main()
{
    int r,c,num,count = 0;
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

    printf("Please enter a a number to check wether it is present in the matrix or not: ");
    scanf("%d", &num);
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            if(num == arr[i][j])
            {
                count++;
            }
        }
    }

    if(count)
    {
        printf("%d found in the matrix", count);
    }
    else
    {
        printf("Number not found in the matrix");
    }

    return 0;
}