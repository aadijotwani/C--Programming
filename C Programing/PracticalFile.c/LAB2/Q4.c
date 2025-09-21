//4.Write a program for converting distance in mm to cm, inch, feet (1 cm =10mm, 1inch=2.5cm, 1 feet =12 inches).
#include <stdio.h>

int main()
{
    int dis;
    printf("Please enter the distance in mm : ");
    scanf("%d", &dis);
    float dcm = 0.1 *dis;
    float dinch = 0.04 * dis;
    float dfeet = (1.0/12)*0.04*dis;

    printf("Distance in cm = %f \nDistance in Inches = %f \nDistance in Feet = %lf", dcm, dinch, dfeet);

    return 0;
}