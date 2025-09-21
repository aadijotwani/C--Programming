#include <stdio.h>

int main()
{
    int t;
    printf("Please enter the time in seconds : ");
    scanf("%d", &t);
    
    int sec ,min, hour;

    hour = t/3600;
    min = (t%3600)/60;
    sec = t%60;

    printf("Hours =  %d Mins = %d Sec = %d", hour, min, sec);

    return 0;
}

//4632
