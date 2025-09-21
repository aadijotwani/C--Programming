#include <stdio.h>

int main()
{
    int r,c,check=0;
    printf("Please enter the size of the array No.of rows = No. of Columns: ");
    printf("\nNo. of ROWS: ");
    scanf("%d", &r);
    printf("No. of COLUMNS: ");
    scanf("%d", &c);

    
        int arr[r][c], arrTrans[r][c];
        
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
                arrTrans[i][j] = arr[j][i];
            }
        }

        printf("\nTranspose of a matrix is: \n");
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                printf("%d ", arrTrans[i][j]);
            }
            printf("\n");
        } 
    return 0;
}