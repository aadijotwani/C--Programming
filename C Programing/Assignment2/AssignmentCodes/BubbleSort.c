#include <stdio.h>

int main()
{
    int arr[5] = {7, 3, 6, 9, 4};
    //int start = arr[0];
  //  int end = arr[5-1];

    for(int i=0; i<5; i++)
    {
        for(int j = 0; j<4; j++)
        {
            if(arr[j+1] < arr[j])
            {
                int temp = arr[j]; // 3 7 6 9 4
                arr[j] = arr[j+1];
                arr[j+1] = temp;             
            }
        }
    }

    for(int i=0; i<5; i++)
    {
        printf("%d  ", arr[i]);
    }

    return 0;
}