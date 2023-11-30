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

    *pPower = ex.power + 1;
    *pMultiplier = ex.multiplier / *pPower;

    printf("= %lf%c^%lf + C\n", *pMultiplier, ex.variable, *pPower);
    
    return 0;
}