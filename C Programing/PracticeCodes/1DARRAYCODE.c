#include <stdio.h>

int main()
{
    int len;
    printf("Please enter the length  of the array");
    scanf("%d", &len);
   
    int arr[len];

    printf("Please enter the element of the array : ");
    for(int i=0; i<len; i++)
    {
        scanf("%d", &arr[i]);
    }


    printf("\n");
    for(int i=0; i<len; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;
}