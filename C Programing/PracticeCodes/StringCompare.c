#include <stdio.h>

int main() {
    int calls;
    float bill = 0;

    // Prompt user for the number of calls
    printf("Enter the number of calls: ");
    scanf("%d", &calls);

    // Use a switch statement to calculate the bill
    switch (calls) {
        case 1 ... 150:  // This syntax works in GCC extensions, not standard C
            bill = 0; // No charge for calls between 1 and 150
    }
}