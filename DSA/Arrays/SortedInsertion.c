#include <stdio.h>
#include <stdbool.h>

int main(){

    bool check = false;
    int arr[100], n=5, ele;
     arr[0] = 0;
     arr[1] = 1;
     arr[2] = 3;
     arr[3] = 4;
     arr[4] = 5;
    
    printf("Please enter the element to insert: ");
    scanf("%d", &ele);

    arr[n] = ele;
    n++;

    for(int i=0; i<n-1; i++){
        if(arr[i] > arr[i+1]|| check == true){
            int temp = arr[i+1];
            arr[i+1] = arr[i];
            arr[i] = temp;
            check = true;
        }
    }

     for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}