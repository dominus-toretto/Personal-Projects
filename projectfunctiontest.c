#include <stdio.h>
#include <math.h>

int main()
{
    int func, var, count = 0, x, sum = 0;
    printf("\nEnter a function[1 - 2]: ");
    scanf("%d", &func);

    switch (func)
    {
        case 1:
            printf("How many variables: ");
            scanf("%d", &var);
            if (var>0)
            {
                while (count<var)
                {
                    printf("Enter a variable: ");
                    scanf("%d", &x);
                    count++;
                    sum = sum + x;
                }
                printf("sum = %d", sum);
            }
            else
            {
                printf("Enter a positive number! Stupid!");
            }
            break;
        case 2:
            printf("How many variables: ");
            scanf("%d", &var);
            if (var>0)
            {
                int control, answer;
                printf("Enter a control variable: ");
                scanf("%d", &control);

                while (count<var)
                {
                    printf("Enter a variable: ");
                    scanf("%d", &x);
                    count++;
                    sum = sum + x;
                }
                answer = control - sum;
                printf("sum = %d", answer);
            }
            else
            {
                printf("Enter a positive number! Stupid!");
            }
            break;
        default:
            printf("\nInvalid choice!\n");
            return 1;
    }
    
}
