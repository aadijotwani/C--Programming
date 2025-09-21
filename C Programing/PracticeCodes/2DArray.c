#include <stdio.h>

int main()
{
    int arr[2][2] = {{1,2}, {3,4}}; // Declaration and Initialization 

    for(int i=0; i<2; i++)          // printing the elements of the 2d array using for loop 
    {
        for(int j=0; j<2; j++)
        {
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
    } 
    return 0;
}