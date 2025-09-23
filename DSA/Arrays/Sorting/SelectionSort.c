#include <stdio.h>

int main(){

    int arr[] = {5, 4, 1, 2, 3};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<n; i++){
        int small = i;
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[small]){
                small = j;
            }
        }
            int temp = arr[i];
            arr[i] = arr[small];
            arr[small] = temp;
    }

    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}