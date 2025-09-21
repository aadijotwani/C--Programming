#include <stdio.h>

int main()
{
    int num;
    printf("Please enter a num : ");
    scanf("%d", &num);

    int start = 0, end = 1;
    int cal = 0;
    for(int i=0; i<num; i++)
    {
        printf("  %d", start);
        cal = start + end; 
        start = end;
        end = cal;     
    }

    return 0;
}