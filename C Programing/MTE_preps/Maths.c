#include <stdio.h>

int mul(int num1, int num2)
{
    printf("%d",num1, num2);
    return 0;
}

int swap(int num1, int num2)
{
    // int temp = num1;
    // num1 = num2;
    // num2 = temp;

    


    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    
    printf("%d %d", num1, num2);
    return 0;

}

int main()
{
    int num1, num2;
    printf("Please enter 2 Numbers to find its Multiplication and Division - ");
    scanf("%d %d", &num1, &num2);
    //mul(num1, num2);
    swap(num1,num2);

    return 0;
}