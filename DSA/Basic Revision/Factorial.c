#include <stdio.h>

int main(){

    int n, cal=1;
    printf("Please enter a number: ");
    scanf("%d", &n);

    while(n!=0){
        cal *= n;
        n-=1;
    }
    printf("The factorial is %d", cal);

    return 0;
}