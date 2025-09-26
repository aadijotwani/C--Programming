#include <stdio.h>
#include <string.h>
#define MAX 100

int arr[MAX], top = -1;

// push function
void push(int value) {
    if (top == MAX - 1) {
        printf("Stack Overflow\n");
        return;
    }
    arr[++top] = value;
}

// pop function
int pop() {
    if (top == -1) {
        return -1; // stack empty
    }
    return arr[top--];
}

// check if stack empty
int isEmpty() {
    return (top == -1);
}

// function to check if brackets are balanced
int checkBrackets(char *expr) {
    top = -1; // reset stack
    for (int i = 0; i < strlen(expr); i++) {
        if (expr[i] == '(' || expr[i] == '{' || expr[i] == '[') {
            push(i);
        }
        else if (expr[i] == ')' || expr[i] == '}' || expr[i] == ']') {
            int openIndex = pop();
            if (openIndex == -1) return 0; // extra closing bracket
            char openChar = expr[openIndex];
            if ((expr[i] == ')' && openChar != '(') ||
                (expr[i] == '}' && openChar != '{') ||
                (expr[i] == ']' && openChar != '[')) {
                return 0; // mismatch
            }
        }
    }
    return isEmpty(); // must be empty if balanced
}

// function to find matching closing bracket
int findClosingBracket(char *expr, int openIndex) {
    top = -1;
    for (int i = openIndex; i < strlen(expr); i++) {
        if (expr[i] == '(' || expr[i] == '{' || expr[i] == '[') {
            push(i);
        }
        else if (expr[i] == ')' || expr[i] == '}' || expr[i] == ']') {
            int open = pop();
            if (open == openIndex) {
                return i; // found matching closing bracket
            }
        }
    }
    return -1; // not found
}

int main() {
    char expr[MAX];
    int openIndex;

    printf("Enter expression: ");
    scanf("%s", expr);

    printf("Enter index of opening bracket: ");
    scanf("%d", &openIndex);

    if (checkBrackets(expr)) {
        int closeIndex = findClosingBracket(expr, openIndex);
        if (closeIndex != -1)
            printf("Matching closing bracket index: %d\n", closeIndex);
        else
            printf("No matching closing bracket found.\n");
    } else {
        printf("Invalid bracket sequence.\n");
    }
    return 0;
}
