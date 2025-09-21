#include <stdio.h>

struct Structure
{
    int rollno;
    float m1, m2;
    char n[50];
}
S1 = {1, 5.5, 6.5, "ABC"};

void main()
{
    struct Structure *S2;
    S2 = &S1;
    
    printf("%d %f %f %s", (*S2).rollno, (*S2).m1, S2 -> m2, S2 -> n);
}
