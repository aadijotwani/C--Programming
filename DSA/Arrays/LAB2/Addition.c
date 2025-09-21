#include <stdio.h>

void Addition(int n, int arr1[][n], int arr2[][n], int sum[][n])
{
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            sum[i][j] = arr1[i][j] + arr2[i][j]; 
        }
    }
}

int main(){
    int n;
    printf("Please enter the size of the array: ");
    scanf("%d", &n);

    int arr1[n][n], arr2[n][n];
    printf("Please enter the elements of the array1: ");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Please enter the elements of the array2: ");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &arr2[i][j]);
        }
    }

    int sum[n][n];

    Addition(n, arr1, arr2, sum);

     for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}