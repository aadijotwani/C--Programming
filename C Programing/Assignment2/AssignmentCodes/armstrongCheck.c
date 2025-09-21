#include <stdio.h>
#include <math.h>

//   4 9 5 2
int check(int n)
{
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
    return 0;
}

int main()
{
    // to check whether the given number is an armstrong  number or not:

    int n;
    printf("Please input an 4 digit number here :");
    scanf("%d", &n);
    check(n);
  
    return 0;
}