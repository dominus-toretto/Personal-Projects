#include <stdio.h>
int calculation(int y);
int main()
{
    int x;
    printf("Enter integer: ");
    scanf("%d", &x);
    calculation(x);
}

int calculation(int y)
{
    if(y>0)
    {
        printf("positive");
    }
    else
    {
        printf("negative");
    }
}