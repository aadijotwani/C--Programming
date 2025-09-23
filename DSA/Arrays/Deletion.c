#include <stdio.h>

int main(){

    int arr[100], pos, n, ele;

    printf("Please enter the size of Array:");
    scanf("%d", &n);

    printf("Please enter the elements of the array: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Please enter the position of element to delete: ");
    scanf("%d", &pos);

    for(int i=pos; i<n; i++){
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }

    return 0;
}