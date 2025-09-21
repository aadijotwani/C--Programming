#include <stdio.h>

int main()
{
    int n; 
    scanf("%d", &n);

    int arr[n];
    printf("Please enter the array");
    
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    
    int num;
    printf("please enter a number to check if it is present or not : ");
    scanf("%d", &num);


    for(int i=0; i<n; i++)
    {
        if(num == arr[i])
        {
            printf("the number is found at index %d",i);
            break;
        }
        else
        {
            printf("error 404 not found");
        }
    }
    return 0;
}