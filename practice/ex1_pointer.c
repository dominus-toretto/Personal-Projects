#include <stdio.h>
int main ()
{
    int x;
    int *pX;
    printf("Enter value: ");
    scanf("%d", &x);
    pX = &x;
    printf("Value %d was entered", *pX);
}