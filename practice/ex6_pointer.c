#include <stdio.h>
#define SIZE 100
int combined[SIZE] = {0};
void merge(int *a, int asize, int *b, int bsize)
{
    int n, i, *p;
    p = &combined[0];
    i = 0;
    // Process first array
    for (n=0; n<asize; n++) {
        *(p + i) = *(a + n);
        i++;
    }
    // Process second array
    for (n=0; n<bsize; n++) {
        *(p + i) = *(b + n);
        i++;
    }
    // Print results
    for (n=0; n<asize + bsize; n++) {
        printf("%d ", combined[n]);
    }
    printf("\n");
}
int main()
{
    int x[5] = {9, 2, 3, 4, 5};
    int y[6] = {6, 7, 8, 1, 2, 3};
    merge(x, 5, y, 6);
    return 0;
}
