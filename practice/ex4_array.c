#include <stdio.h>
int main ()
{
    int arr[3][3] = {{3,4,6}, {9,1,2}, {6,7,4}};
    int i, n, total;
    float avg;

    for (i=0; i<3; i++)
    {
        total = 0;
        avg = 0;
        for (n=0; n<3; n++)
        {
            total += arr[i][n];
        }
        avg = total / 3.0;
        printf("Row %d: total = %d, avg = %f\n", i, total, avg);
    }
    return 0;
}