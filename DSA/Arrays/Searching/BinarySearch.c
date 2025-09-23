#include <stdio.h>
#include <stdbool.h>

bool Search(int arr[],int n, int key){
    
    int low=0; 
    int high = n-1;

    while(low<=high){
        int mid = low + (high-low)/2;

        if(arr[mid] == key){
            return true;
        }

        else if(arr[mid] < key){
            low = mid+1;
        }

        else if(arr[mid] > key){
            high = mid-1;
        }
    }
    return false;
}

int main(){

    int arr[] = {2, 4, 6, 8, 10, 12, 14};
    int key;

     int n = sizeof(arr)/sizeof(arr[0]);

    printf("Please enter a number to Search: ");
    scanf("%d", &key);
    bool result = Search(arr, n, key);

    if(result == true){
        printf("Element Found");
    }

    else{
        printf("Element Not Found");
    }

    return 0;
}