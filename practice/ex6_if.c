#include <stdio.h>

int main ()
{
    int x, y, answer;

    printf("Enter integer x: ");
    scanf("%d", &x);
    printf("Enter divisor y: ");
    scanf("%d", &y);

    answer = y % x;

    if (answer = 0)
    {
        printf("%d/%d is perfectly divisible", x, y);
    }

    else
    {
        printf("%d/%d is not perfectly divisible", x, y);
    }
    
}