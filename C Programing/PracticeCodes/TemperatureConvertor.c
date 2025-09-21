#include <stdio.h>

int main()
{
    int c,f;

    printf("Fahreneit to Centigrate : ");
    printf("\n Please enter Temperature in Fahreneit ");
    scanf("%d", &f);
    c = (f-32)*5/9;
    printf("Centigrate : %d\n", c);

    printf("Centigrate to Fahreneit : ");
    printf("\n Please enter Temperature in Centigrate ");
    scanf("%d", &c);
    f = (9*c/5) + 32;
    printf("Fahrenheit : %d", f);

}