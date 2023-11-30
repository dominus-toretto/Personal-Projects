#include <stdio.h>

struct diff
{
    double multiplier;
    char variable;
    double power;
};

int main()
{
    double *pPower, *pMultiplier;
    struct diff ex;
    printf("Enter a multiplier: ");
    scanf("%lf", &ex.multiplier); 
    printf("Enter a variable: ");
    scanf(" %c", &ex.variable); 
    printf("Enter power: ");
    scanf("%lf", &ex.power); 

    pPower = &ex.power;
    pMultiplier = &ex.multiplier;

    *pMultiplier = ex.multiplier * ex.power;
    *pPower = ex.power - 1;

    if(ex.power <= 0)
    {
        printf("f'(%c) = %lf\n", ex.variable, *pMultiplier);
    }
    else
    {
        printf("f'(%c) = %lf%c^%lf\n", ex.variable, *pMultiplier, ex.variable, *pPower);
    }
    return 0;
}