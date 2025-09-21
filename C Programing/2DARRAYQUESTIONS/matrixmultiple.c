#include <stdio.h>

int main()
{
     int r1,c1,r2,c2;
    printf("Please enter the size of the Matrix 1: ");
    printf("\nNo. of ROWS in matrix 1: ");
    scanf("%d", &r1);
    printf("No. of COLUMNS matrix 1: ");
    scanf("%d", &c1);
    printf("\nNo. of ROWS in matrix 2: ");
    scanf("%d", &r2);
    printf("No. of COLUMNS matrix 2: ");
    scanf("%d", &c2);

    int arr1[r1][c1], arr2[r2][c2];

    if(c1 == r2)
    {
        printf("Please enter the elements of the array1: \n");
        for(int i=0; i<r1; i++)
        {
            for(int j=0; j<c1; j++)
            {
                scanf("%d", &arr1[i][j]);
            }
        }



        printf("\nPlease enter the elements of the array2: \n");
        for(int i=0; i<r2; i++)
        {
            for(int j=0; j<c2; j++)
            {
                scanf("%d", &arr2[i][j]);
            }
        }



        int result[r1][c2];
        for(int i=0; i<r1; i++)
        {
            for(int j=0; j<c2; j++)
            {
                result[i][j] = 0;
            }
        }

        

        printf("\nMultiplication of matrix is: \n");
        for(int i=0; i<r1; i++)
        {
            for(int j=0; j<c2; j++)
            {
                for(int k=0; k<c1; k++)
                {
                    result[i][j] += arr1[i][k]*arr2[k][j];
                }
            }
        }

        
        for(int i=0; i<r1; i++)
        {
            for(int j=0; j<c2; j++)
            {
                printf("%d ",result[i][j]);
            }
            printf("\n");
        }



    }
    else
    {
        printf("Multiplication not possible as no. of columns in matrix 1 is not equal to no. of rows in matrix 2");
    }

    return 0;
}