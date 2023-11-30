#include <stdio.h>
int main ()
{
    char arr[5];
    int i;
    char* p;
    p = &arr[0];
    printf("Enter 5 characters: ");
    for (i=0; i<5; i++)
    {
        scanf("%c", p++);
    }
    p = &arr[0];
    for (i=0; i<5; i++)
    {
        printf("%c = %d\n",  *p, *p);
        p++;
    }
    return 0;
}

/*
#include <stdio.h>
int main()
{
    char a[5];
    int n;
    char *p;
    p = &a[0];
    printf("Enter 5 characters: ");
    for (n=0; n<5; n++) 
    {
        scanf("%c", p++);
    }
    p = &a[0];
    for (n=0; n<5; n++) 
    {
        printf("%c = %d\n", *p, *p);
        p++;
    }
    return 0;
}
*/