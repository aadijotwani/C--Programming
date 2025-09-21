#include <stdio.h>
#include <math.h>
#define pi 3.141592653589793


int main()
{
    int r;
    printf("Please enter the Radius of circle: ");
    scanf("%d", &r);
    float area = pi*pow(r,2);

    printf("Area of circle = %f", area);
    return 0;
}