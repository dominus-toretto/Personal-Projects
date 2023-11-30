#include <stdio.h>

struct add_subtract                                 //Addition and Subtraction
{
    double add_input;
    double subtract_input;
    double control;
    int var;
};



int main()
{
    double answer;
    int count;
    struct add_subtract op;

    int func;
    printf("case: ");
    scanf("%d", &func);

    switch (func)
    {
        case 1:
        printf("How many variables: ");
        scanf("%d", &op.var);
        if (op.var>1)
        {
            while (count<op.var)
            {
                printf("Enter a variable #%d: ", count+1);
                scanf("%lf", &op.add_input);
                answer = answer + op.add_input;                        
                count++;
            }
        printf("SUM = %lf", answer);              
        }
        else
        {
            printf("\nEnter 2 or more variables!\n");
        }

        break;

        case 2:
            printf("How many variables: ");
            scanf("%d", &op.var);
            if (op.var>1)
            {
                printf("Enter a control variable: ");
                scanf("%lf", &op.control);
                while (count<op.var)
                {
                    printf("Enter a variable #%d: ", count+1);
                    scanf("%lf", &op.add_input);
                    count++;
                    op.subtract_input = op.subtract_input + op.add_input;
                }
                answer = op.control - op.subtract_input;
                printf("ANSWER = %lf", answer);
            }
            else
            {
                printf("\nEnter 2 or more variables!\n");
            }
            break;
        default:
            printf("error");
    }
}