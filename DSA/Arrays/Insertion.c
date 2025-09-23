#include <stdio.h>

int main(){

    int arr[100], pos, n, ele;

    printf("Please enter the size of Array:");
    scanf("%d", &n);

    printf("Please enter the elements of the array: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    
    printf("Please enter the element to insert: ");
    scanf("%d", &ele);

    printf("Please enter the position to enter the elemnts: ");
    scanf("%d", &pos);

    arr[n+1] = ele;
    n++;
    for(int i=pos; i<n; i++){
        int temp = arr[n];
        arr[n] = arr[i];
        arr[i] = temp;
    }


    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}