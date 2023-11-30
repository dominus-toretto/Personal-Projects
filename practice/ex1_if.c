#include <stdio.h>

int main()
{
    int x, y, add, minus;
    
    printf("Enter integer 1: ");
    scanf("%d", &x);
    printf("Enter integer 2: ");
    scanf("%d", &y);

    add = x + y;
    minus = x - y;

    printf("Sum = %d", add);
    printf("\nDifference = %d", minus);
}