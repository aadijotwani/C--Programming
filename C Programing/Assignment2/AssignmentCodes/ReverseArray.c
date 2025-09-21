#include<stdio.h>

int reverse(int size, int arr[size])
{
    for(int i=0; i<size/2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[(size-1)-i];
        arr[(size-1)-i] = temp;
    }

    return 0;
}

int printing(int size, int arr[size])
{
    printf("Printing the elemtns of the array : ");
    for(int i=0; i<size; i++)
    {
        printf(" %d ", arr[i]);
    }

    return 0;
}

int main()
{
    int size;
    printf("Please enter the size of the array ");
    scanf("%d ", &size);

    int arr[size];

    printf("Please enter the elements of the array");
    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    reverse(size, arr);     
    printing(size, arr);

    return 0;
}