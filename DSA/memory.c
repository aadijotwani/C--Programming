#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // allocate memory for n integers
    int *arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // assign values
    for(int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    // print values
    printf("Array elements: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr); // free allocated memory
    return 0;
}
