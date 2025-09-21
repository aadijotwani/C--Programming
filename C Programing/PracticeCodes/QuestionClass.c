#include <stdio.h>
#include <math.h>

void reverse();
void Armstrong();
void Palindrome();



void reverse()
{
    int num, sum = 0;
    printf("Please enter a number to reverse it : ");
    scanf("%d", &num);

    while(num != 0)
    {
        int n = num%10;
        int cal = n*pow(10,n-1);
        sum += cal;
        num/= 10;
    }
    printf("the new number is %d", sum);
}

void Palindrome()
{
    int num, originalNum, reversedNum = 0, remainder;
    
    printf("Enter a number to check if it is palindrome or not : ");
    scanf("%d", &num);

    originalNum = num;
    
    while (num != 0) {
        remainder = num % 10;         
        reversedNum = reversedNum * 10 + remainder; 
        num /= 10;
    }

    if (originalNum == reversedNum) {
        printf("%d is a palindrome number.\n", originalNum);
    } else {
        printf("%d is not a palindrome number.\n", originalNum);
    }
}

void Armstrong()
{
    int n;
    printf("Please input an 4 digit number here :");
    scanf("%d", &n);
    int thousand = n/1000;
    int hundred = (n/100)%10;
    int ten = (n/10)%10;
    int one = (n/1)%10;
    
    printf("\n %d", thousand);
    printf("\n %d", hundred);
    printf("\n %d", ten);
    printf("\n %d", one);
    
    if(pow(thousand,4) + pow(hundred,4) + pow(ten,4) + pow(one,4) == n)
    {
        printf("\n It is an angstromg number");
    }
    else
    {
        printf("Not an amstrong number");
    }
}


void main()
{
    int choice;
    printf("1. Reverse a number. \n2. Palindrome Number or not. \n3. Armstrong Number or not");
    printf("\n\nPleas enter your choice : ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1: 
        {
            reverse();
            break;
        }

        case 2:
        {
            Palindrome();
            break;
        }

        case 3:
        {
            Armstrong();
            break;
        }
    }
}