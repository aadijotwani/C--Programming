//Write a program to find the roots of a quadratic equation.  Hint: root = -b +/- sqrt(b2-4ac)/2a
#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c;
    printf("Please enter the numbers : ");
    printf("\na = ");
    scanf("%d", &a);
    printf("\nb = ");
    scanf("%d", &b);
    printf("\nc = ");
    scanf("%d", &c);

    int dis = b*b - 4*a*c;
    int root1,root2;

    if(dis > 0)
    {
        root1 = (-b + sqrt(dis)) / (2 * a);
        root2 = (-b - sqrt(dis)) / (2 * a);
        printf("Roots are real and distinct:\n");
        printf("Root 1 = %.2lf\n", root1);
        printf("Root 2 = %.2lf\n", root2);

    }
    else if(dis == 0)
    {
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and equal:\n");
        printf("Root = %lf\n", root1);
    }
    else
    {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-dis) / (2 * a);
        printf("Roots are complex:\n");
        printf("Root 1 = %.lf + %lfi\n", realPart, imaginaryPart);
        printf("Root 2 = %.lf - %lfi\n", realPart, imaginaryPart);
    }
    return 0;
}