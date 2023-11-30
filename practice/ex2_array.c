#include <stdio.h>
int main()
{
    char arr[5];
    int i;
    printf("Enter 5 characters: ");
    for (i=0; i<5; i++)
    {
        scanf("%c", &arr[i]);
    }

    for (i=0; i<5; i++)
    {
        printf("%c = %d\n", arr[i], arr[i]);
    }
    return 0;   
}