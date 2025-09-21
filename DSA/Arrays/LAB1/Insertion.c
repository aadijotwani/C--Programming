#include <stdio.h>

void insertion(){
    int n, element, pos;
    printf("Please enter the size of the array: ");
    scanf("%d", &n);

    int arr[n+1];
    printf("Please enter the elements of the array: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Please enter the element to insert: ");
    scanf("%d", &element);

    printf("Please enter the position  between 0 to %d to enter the element: ", n-1);
    scanf("%d", &pos);

    arr[n+1] = element;

    for(int i=n+1; i>pos; i--)
    {
        int temp = arr[i];
        arr[i] = arr[i-1];
        arr[i-1] = temp;
    }

    for(int i=0; i<n+1; i++){
        printf("%d", arr[i]);
    }


}

int main()
{
    insertion();
    return 0;
}