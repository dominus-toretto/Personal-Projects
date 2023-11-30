#include <stdio.h>
int main()
{
    int arr[3][3] = {{3,4,6}, {9,1,2}, {6,7,4}};
    int i, n, total = 0;
    float avg;

    for (i=0; i<3; i++)
    {
        for (n=0; n<3; n++)
        {
            total += arr[i][n];
        }
    }
    avg = total / 9.0;
    printf("avg: %f", avg);
    printf("\ntotal: %d", total);
}