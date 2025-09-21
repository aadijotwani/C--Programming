#include <stdio.h>

int main()
{
    int a[5], ele; 
    printf("please enter 5 elements of the array : ");
    for(int i=0; i<5; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Please enter the element to find in the array ");
    scanf("%d", &ele);

    for(int i=0; i<5; i++)
    {
        if(a[i] == ele)
        {
            printf("Element is found at index %d", i);
            break;
        }
    }

    return 0;
}