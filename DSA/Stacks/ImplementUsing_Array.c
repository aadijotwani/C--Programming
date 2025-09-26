#include <stdio.h>
#define n 5

int stack[n];
int top = -1;

void push(){
    int x; 
    printf("Enter Data: ");
    scanf("%d", &x);

    if(top == n-1){
        printf("Overflow");
    }
    else{
        top++;
        stack[top] = x;
    }
}

void pop(){

    if(top == -1){
        printf("Underflow");
    }
    else{
        top--;
    }
}

void peek(){
    if(top == -1){
        printf("Underflow");
    }
    else{
        printf("%d",stack[top]);
    }
}

void display(){
    
    for(int i=top; i>=0; i--){
        printf("%d ", stack[i]);
    }
}
