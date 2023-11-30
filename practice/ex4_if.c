#include <stdio.h>

int main()
{
    int x, y, z, ansx, ansy, ansz;

    printf("Enter integer 1: ");
    scanf("%d", &x);
    printf("Enter integer 2: ");
    scanf("%d", &y);
    printf("Enter integer 3: ");
    scanf("%d", &z);

    ansx = x % 2;
    ansy = y % 2;
    ansz = z % 2;

    // x
    if(x>0)
    {
        if(ansx = 1)
        {
            printf("\n%d = positive, even", x);
        }
        else 
        {
            printf("\n%d = positive, odd", x);
        }
    }
    else if(x<0)
    {
        if(ansx = 1)
        {
            printf("\n%d = negative, even", x);
        }
        else 
        {
            printf("\n%d = negative, odd", x);
        }
    }

    //y
    if(y>0)
    {
        if(ansy = 1)
        {
            printf("\n%d = positive, even", y);
        }
        else 
        {
            printf("\n%d = positive, odd", y);
        }
    }
    else if(y<0)
    {
        if(ansy = 1)
        {
            printf("\n%d = negative, even", y);
        }
        else 
        {
            printf("\n%d = negative, odd", y);
        }
    }
    
    //z
    if(z>0)
    {
        if(ansz = 1)
        {
            printf("\n%d = positive, even", z);
        }
        else
        {
            printf("\n%d = positive, odd", z);
        }
    }
    else if(z<0)
    {
        if(ansz = 1)
        {
            printf("\n%d = negative, even", z);
        }
        else
        {
            printf("\n%d = negative, odd", z);
        }
    }
    return 0;
}