//5.	Write a program to find out the distance between two points 
//e.g. (x1, y1) and (x2, y2). Hint: Distance=√(x2-x1)2+ (y2-y1)2
#include <stdio.h>
#include <math.h>


int main()
{
    int x1,y1,x2,y2;
    printf("Please enter the coordinates of the points (x1, y1) and (x2, y2) : ");
    printf("\n x1 = ");
    scanf("%d", &x1);
    printf("\n x2 = ");
    scanf("%d", &x2);
    printf("\n y1 = ");
    scanf("%d", &y1);
    printf("\n y2 = ");
    scanf("%d", &y2);

    float dis = sqrt(pow((x2-x1),2) + pow((y2-y1),2));
    printf("The distance = %f", dis);
    return 0;
}