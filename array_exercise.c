#include<stdio.h>
int main()
{
    char reply[] = {"yes"};
    int x[4];
    printf("Enter integer: ");
    scanf("%d", &x);
    printf("%d", x[4]);
    printf("\n%c", reply[2]);
    return 0;
}

