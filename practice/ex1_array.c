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
    printf("characters: ");
    for (i=0; i<5; i++)
    {
        printf("%c ", arr[i]);
    }
    return 0;
}
