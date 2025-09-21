#include <stdio.h>

int main()
{
    printf("Please enter a array of size 5 : ");
    int arr[5];

    for(int i=0; i<5; i++)
    {
        scanf("%d", &arr[i]);
    }

    int size = sizeof(arr)/ sizeof(arr[0]);
    for(int i=0; i<size/2; i++)
    {
       // 1  2  3  4  5
       int temp = arr[i];
       arr[i] = arr[(size-1)-i];
       arr[(size-1)-i] = temp;
    }

    for(int i=0; i<5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}