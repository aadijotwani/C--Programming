#include <stdio.h>
#include <stdlib.h>

int main(){

    int *array;
    int size;

    printf("Enter the size of the Array: ");
    scanf("%d", &size);

    array = (int*)malloc(size * sizeof(int));

    if(array == NULL){
        printf("Memory Not Allocated\n ");
        return 1;
    }

    for(int i=0; i<size; i++){
        array[i] = i+1;
    }

    for(int i=0; i<size; i++){
        printf("%d", array[i]);
    }

    free(array);
    return 0;

}