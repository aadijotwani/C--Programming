#include <stdio.h>

void Perform(){

    int n, element;
    
    
    printf("Please enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Please enter the elements of the array: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Please enter the element to search: ");
    scanf("%d", &element);
    for(int i=0; i<n; i++)
    {
        if(arr[i] == element)
        {
            printf("Element found at index %d", i);
            break;
        }
    }
}

int main(){
    Perform();

}