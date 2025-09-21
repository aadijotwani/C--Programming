#include <stdio.h>

int main() {
    int rows = 5;
    int current = 1;

    for (int i = 1; i <= rows; i++) {
        int temp = current;
        for (int j = 1; j <= i; j++) {
            printf("%d ", temp);
            temp += 2;
        }
        current++;
        printf("\n");
    }

    return 0;
}