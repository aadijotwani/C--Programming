#include <stdio.h>

int main()
{
    int time, hour, min, sec;
    printf("Please enter time in seconds");
    scanf("%d", &time);
    hour = time/3600;
    min = (time%3600)/60;
    sec = (time%60);
    printf("Hours =  %d Mins = %d Sec = %d", hour, min, sec);
    return 0;
}