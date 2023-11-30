#include <stdio.h>
int main ()
{
    int i;
    int arr[10];
    int *pArr;
    pArr = &arr[0];
    printf("Enter 10 integers: ");
    for (i=0; i<10; i++)
    {
        scanf("Enter index: ", pArr++);
    }
    printf("Enter index: ");
    scanf("%d", &i);
    pArr = &arr[i];
    for (i=0; i<3; i++)
    {
        printf("%d ", *pArr);
        pArr++;
    }
    printf("\n");
    return 0;
}