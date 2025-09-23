#include <stdio.h>

int main(){

    int arr[] = {5, 4, 1, 2, 3};
    int n = sizeof(arr)/sizeof(arr[0]);   
    int j, key;
    
    for(int i=1; i<n; i++){
        key = arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }

     for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
}