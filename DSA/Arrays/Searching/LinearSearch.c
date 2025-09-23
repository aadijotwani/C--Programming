#include <stdio.h>

int main(){

    int arr[] = {1, 2, 3, 5, 9, 11};
    int n;
    printf("Please enter a number to search: ");
    scanf("%d", &n);

    for(int i=0; i<7; i++){
        if(n == arr[i]){
            printf("Element Found");
            break;
        }
    }


    return 0;
}
