//Write a program to take 3 student marks in 5 subjects. Print the total marks of each student and the average marks of each subject.
#include <stdio.h>

int main()
{
    int stu, marks;

    printf("Please enter the number of students: ");
    scanf("%d", &stu);
    printf("Please enter no. of subjects: ");
    scanf("%d", &marks);

    int total[stu];
    float avgMarks[marks];
    int arr[stu][marks];
    
    printf("Please enter the marks of student in each subject: \n");
    for(int i=0; i<stu; i++)
    {
        total[i] = 0;
        for(int j=0; j<marks; j++)
        {
            avgMarks[j] = 0;
            scanf("%d", &arr[i][j]);
            total[i] += arr[i][j];
        }
    }

    for(int i=0; i<marks; i++)
    {
        for(int j=0; j<stu; j++)
        {
            avgMarks[i] += arr[j][i];
        }
    }

    for(int j=0; j<marks; j++)
    {
        avgMarks[j] = avgMarks[j]/3;
    }
    
    printf("Total marks of each student is: ");
    for(int i=0; i<stu; i++)
    {
        printf("\n%d ", total[i]);
    }
    
    printf("\n\nAverage per subject is: ");
    for(int i=0; i<marks; i++)
    {
        printf("\n%f ", avgMarks[i]);
    }
    
    return 0;
}