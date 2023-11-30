#include <stdio.h>

int main()
{
    char reply;
    printf("Enter a letter or a digit: ");
    fflush(stdin);
    scanf("%c", &reply);


    if (reply >= 0 || reply <= 9)
    {
        printf("You entered the number %c", reply);
    }
    else
    {
        printf("You entered the alphabet %c", reply);
    }
}