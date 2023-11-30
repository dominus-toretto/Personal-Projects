#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define pi 3.141592653589
#define e 2.718281828459045

void function_menu(void);
void deg_rad (void);
void line (void);
int permutation(int n, int r);
int combination(int n, int r);
double answer_menu (double answer);

                                                    /*MENU DESIGN*/
void line (void)
{
    printf("======================================================================================================================\n");
}

void function_menu(void)
{
    line ();
    printf("[1]    Addition          [6]     Factorial     [11]    Log (base 10)  [16]    Absolute Value   [21]    Combination\n");
    printf("[2]    Subtraction       [7]     Sine          [12]    e^x            [17]    Sine Inverse     [22]    Ceil Function\n");
    printf("[3]    Multiplication    [8]     Cosine        [13]    Square Root    [18]    Cosine Inverse   [23]    Floor Function\n");  
    printf("[4]    Division          [9]     Tangent       [14]    Cube Root      [19]    Tangent Inverse  [24]    Differentiation\n");
    printf("[5]    Modulus Division  [10]    Log (base e)  [15]    Power          [20]    Permutation      [25]    Integration\n");
    line ();
}

void deg_rad (void)
{
    printf("\n[1]   Input in degree");
    printf("\n[2]   Input in radian");
}

                                                    /*CALCULATIONS*/
int permutation(int n, int r)
{
    int fact_num = 1, fact_den = 1, den, x = 1, y = 1;
    int permutation;
    den = n - r;
    while (x <= n)
    {
        fact_num = fact_num * x;
        x = x + 1;
    }
    while (y <= den)
    {
        fact_den = fact_den * y;
        y = y + 1;
    }
    permutation = fact_num/fact_den;
    return permutation;
}

int combination (int n, int r)
{
    int fact_r = 1, z = 1;
    int permutation_return, combination;
    permutation_return = permutation(n, r);
    while (z <= r)
    {
        fact_r = fact_r * z;
        z = z + 1;
    }
    combination = permutation_return/fact_r;
    return combination;
}

double answer_menu (double answer)
{
    double a, b, c, d;
    a = ceil(answer);
    b = floor(answer);
    c = round(answer);
    d = abs(answer);
    printf("\n\nCEIL: %0.2lf", a);
    printf("\nFLOOR: %0.2lf", b);
    printf("\nROUND: %0.2lf", c);
    printf("\nABSOLUTE: %0.2lf", d);
    return 0;
}

                                                    /*STRUCTS*/
struct add_subtract                                 //Addition and Subtraction
{
    double add_input;
    double subtract_input;
    double control;
    long int var;
};

struct multiply_divide                              //Multiplication-Division-Power
{
    double x;
    double y;
    long int dividend;
    long int divisor;
    long int remainder;
};

struct trigo_inverse                                //Trigonometry Variables
{
    double theta;
    double opp;
    double hyp;
    double adj;
    double answer_deg;
    double ratio;
};

struct diff_integ                                   //Differentiation-Integration
{
    double multiplier;
    char variable;
    double power;
};

                                                    /*MAIN FUNCTION*/

int main()
{
    int func, trigo_func;                           //Switch case options
    
    int count = 0;                                  //Addition-Subtraction
    
    int n, r, i;                                    //Permutation-Combination

    double input, answer, factorial = 1;            //General input-output variables

    double *pPower, *pMultiplier;                   //Differentiation-Integration pointers
    
    struct add_subtract op;                         //Structs
    struct multiply_divide opx;
    struct trigo_inverse trig;
    struct diff_integ ex;

    char reply = 'y';

    line ();
    printf("             _______      ____      _______   ___   ________             By P3 Group 2: Scientific Calculator\n");
    printf("            /  ____/    /  _  /    /  ____/  /  /  /  __   /              Team members: Robin\n");
    printf("           /  /       /  /__/ /   /  /___   /  /  /  / /  /                             Royson\n");
    printf("          /  /      /  ____   /  /___   /  /  /  /  / /  /                              Le Wei\n");
    printf("         /  /___   /  /   /  /  ____/  /  /  /  /  /_/  /                               You Cong\n");
    printf("        /______/  /__/   /__/  /______/  /__/  /_______/   fx-991EX                     Philbert\n");
    line ();
    printf("\n");
    while (reply == 'y')
    {
        function_menu();
        printf("\nEnter a function[1 - 25]: ");
        scanf("%d", &func);
        switch (func)
        {
            case 1://Addition                          Philbert 1-5
                line ();
                printf("\t\t\t\t\t\tAddition\n");
                printf("How many variables: ");
                scanf("%ld", &op.var);
                if (op.var>1)
                {
                    while (count<op.var)
                    {
                        printf("Enter a variable #%d: ", count + 1);
                        scanf("%lf", &op.add_input);
                        answer = answer + op.add_input;
                        count++;
                    }
                printf("SUM = %lf", answer);
                answer = answer_menu(answer);
                }
                else
                {
                    printf("\nEnter 2 or more variables!\n");
                }
                break;

            case 2:  //Subtraction
                line ();
                printf("\t\t\t\t\t\tSubtraction\n");
                printf("How many variables: ");
                scanf("%ld", &op.var);
                if (op.var>1)
                {
                    printf("Enter a control variable: ");
                    scanf("%lf", &op.control);

                    while (count<op.var)
                    {
                        printf("Enter a variable #%d: ", count + 1);
                        scanf("%lf", &op.add_input);
                        count++;
                        op.subtract_input = op.subtract_input + op.add_input;
                    }
                    answer = op.control - op.subtract_input;
                    printf("ANSWER = %lf", answer);
                    answer = answer_menu(answer);
                }
                else
                {
                    printf("\nEnter 2 or more variables!\n");
                }
                break;

            case 3:  //Multiplication
                line ();
                printf("\t\t\t\t\t\tMultiplication\n");
                printf("Enter a variable for x: ");
                scanf("%lf", &opx.x);
                printf("Enter a variable for y: ");
                scanf("%lf", &opx.y);
                answer = opx.x * opx.y;
                printf("%lf * %lf = %lf", opx.x, opx.y, answer);
                answer = answer_menu(answer);
                break;

            case 4:  //Division
                line ();
                printf("\t\t\t\t\t\tDivision\n");
                printf("Enter a variable for x [dividend]: ");
                scanf("%lf", &opx.x);
                printf("Enter a variable for y [divisor]: ");
                scanf("%lf", &opx.y);
                answer = opx.x / opx.y;
                if (opx.y != 0)
                {
                    printf("%lf / %lf = %lf", opx.x, opx.y, answer);
                    answer = answer_menu(answer);
                }
                else
                {
                    printf("\nInfinity");
                }
                break;

            case 5:  //Modulus Division
                line ();
                printf("\t\t\t\t\t\tModulus Division\n");
                printf("Enter a variable for x [dividend]: ");
                scanf("%ld", &opx.dividend);
                printf("Enter a variable for y [divisor]: ");
                scanf("%ld", &opx.divisor);
                if (opx.divisor != 0)
                {
                    opx.remainder = opx.dividend % opx.divisor;
                    printf("%ld / %ld = %ld(remainder)", opx.dividend, opx.divisor, opx.remainder);
                }
                else
                {
                    printf("\nERROR!");  
                }
                break;

            case 6:  //Factorial                          Le Wei 6-9
                line ();
                printf("\t\t\t\t\t\tFactorial\n");
                printf("Enter a number to factorial: ");
                scanf("%lf", &input);
                if (input>0)
                {
                    for(i=1;i<=input;i++)
                    {
                        factorial = factorial * i;
                    }
                    printf("factorial value of %lf! = %lf", input , factorial);
                }
                else
                {
                    printf("\nEnter a positive number!\n"); 
                }
                break;

            case 7:  //Sine
                line ();
                printf("\t\t\t\t\t\t\tSine");
                deg_rad();
                printf("\nEnter your choice [1-2]: ");
                scanf("%d", &trigo_func);
                switch (trigo_func)
                {
                    case 1:
                        printf("\nEnter input in degrees: ");
                        scanf("%lf", &trig.theta);
                        answer = sin(trig.theta);
                        trig.answer_deg = sin(trig.theta * (pi/180));
                        printf("sin(%lf) = %lf", trig.theta, trig.answer_deg);
                        answer = answer_menu(trig.answer_deg);
                        break;
                    
                    case 2:
                        printf("\nEnter input in radians: ");
                        scanf("%lf", &trig.theta);
                        answer = sin(trig.theta);
                        printf("sin(%f) = %lf", trig.theta, answer);
                        answer = answer_menu(answer);
                        break;

                    default: 
                        printf("Invalid input!");
                }
                break;

            case 8:  //Cosine
                line ();
                printf("\t\t\t\t\t\t\tCosine");
                deg_rad();
                printf("\nEnter your choice [1-2]: ");
                scanf("%d", &trigo_func);
                switch (trigo_func)
                {
                    case 1:
                        printf("\nEnter input in degrees: ");
                        scanf("%lf", &trig.theta);
                        answer = cos(trig.theta);
                        trig.answer_deg = cos(trig.theta * (pi/180));
                        printf("cos(%lf) = %lf", trig.theta, trig.answer_deg);
                        answer = answer_menu(trig.answer_deg);
                        break;
                    
                    case 2:
                        printf("\nEnter input in radians: ");
                        scanf("%lf", &trig.theta);
                        answer = cos(trig.theta);
                        printf("cos(%lf) = %lf", trig.theta, answer);
                        answer = answer_menu(answer);
                        break;

                    default: 
                        printf("Invalid input!");
                }               
                break;
                
            case 9:  //Tangent
                line ();
                printf("\t\t\t\t\t\tTangent");
                deg_rad();
                printf("\nEnter your choice [1-2]: ");
                scanf("%d", &trigo_func);
                switch (trigo_func)
                {
                    case 1:
                        printf("\nEnter input in degrees: ");
                        scanf("%lf", &trig.theta);
                        answer = tan(trig.theta);
                        trig.answer_deg = tan(trig.theta * (pi/180));
                        printf("tan(%lf) = %lf", trig.theta, trig.answer_deg);
                        answer = answer_menu(trig.answer_deg);
                        break;
                    
                    case 2:
                        printf("\nEnter input in radians: ");
                        scanf("%lf", &trig.theta);
                        answer = tan(trig.theta);
                        printf("tan(%lf) = %lf", trig.theta, answer);
                        answer = answer_menu(answer);
                        break;

                    default: 
                        printf("Invalid input!");
                }
                break;

            case 10:  //Log (base e)                          You Cong 10-15
                line ();
                printf("\t\t\t\t\t\tLog (base e)\n");
                printf("Enter an argument for Log [base e]: ");
                scanf("%lf", &input);
                answer = log(input);
                printf("\nLog (base e) (%lf) = %lf", input, answer);
                answer = answer_menu(answer);
                break;

            case 11:  //Log (base 10)
                line ();
                printf("\t\t\t\t\t\tLog (base 10)\n");
                printf("Enter an argument for Log [base 10]: ");
                scanf("%lf", &input);
                answer = log10(input);
                printf("\nLog (base 10) (%lf) = %lf", input, answer);
                answer = answer_menu(answer);
                break;

            case 12:  //e^x
                line ();
                printf("\t\t\t\t\t\t\te^x\n");
                printf("Enter a power of e: ");
                scanf("%lf", &input);
                answer = exp(input);
                printf("e ^%lf = %lf", input, answer);
                answer = answer_menu(answer);
                break;

            case 13:  //Square Root
                line ();
                printf("\t\t\t\t\t\tSquare Root\n");
                printf("Enter a value: ");
                scanf("%lf", &input);
                if (input>0)
                {
                    answer = sqrt(input);
                    printf("Square root (%lf) = %lf", input, answer);
                    answer = answer_menu(answer);
                }
                else
                {
                    printf("\nEnter a positive number!\n");
                }
                break;

            case 14:  //Cube Root
                line ();
                printf("\t\t\t\t\t\tCube Root\n");
                printf("Enter a value: ");
                scanf("%lf", &input);
                answer = cbrt(input);
                printf("Cube root (%lf) = %lf", input, answer);
                answer = answer_menu(answer);
                break;

            case 15:  //Power
                line ();
                printf("\t\t\t\t\t\tPower\n");
                printf("Enter a variable for x[base]: ");
                scanf("%lf", &opx.x);
                printf("Enter a variable for y[power]: ");
                scanf("%lf", &opx.y);
                answer = pow(opx.x,opx.y);
                printf("[base]%lf, [power]%lf = %lf", opx.x, opx.y, answer);
                answer = answer_menu(answer);
                break;

            case 16:  //Absolute value                          Royson 16-19
                line ();
                printf("\t\t\t\t\t\tAbsolute Value\n");
                printf("Enter a value: ");
                scanf("%lf", &input);
                answer = abs(input);
                printf("=|%lf|", answer);
                break;

            case 17:  //Sine inverse
                line ();
                printf("\t\t\t\t\t\tSine Inverse\n");
                printf("Enter opposite magnitude: ");
                scanf("%lf", &trig.opp);
                printf("Enter hypotenuse magnitude: ");
                scanf("%lf", &trig.hyp);
                trig.ratio = trig.opp/trig.hyp;
                answer = asin(trig.ratio);
                trig.answer_deg = answer * (180/pi);
                if (trig.ratio<1 && trig.ratio>-1)
                {
                    printf("\nsin^-1(%lf) = %lfdeg", trig.ratio, trig.answer_deg);
                    printf("\nsin^-1(%lf) = %lfrads", trig.ratio, answer);
                }
                else
                {
                    printf("\nERROR!");
                }
                break;

            case 18: //Cosine inverse
                line ();
                printf("\t\t\t\t\t\tCosine Inverse\n");
                printf("Enter adjacent magnitude: ");
                scanf("%lf", &trig.adj);
                printf("Enter hypotenuse magnitude: ");
                scanf("%lf", &trig.hyp);
                trig.ratio = trig.adj/trig.hyp;
                answer = acos(trig.ratio);
                trig.answer_deg = answer * (180/pi);
                if (trig.ratio<1 && trig.ratio>-1)
                {
                    printf("\ncos^-1(%lf) = %lfdeg", trig.ratio, trig.answer_deg);
                    printf("\ncos^-1(%lf) = %lfrads", trig.ratio, answer);
                }
                else
                {
                    printf("\nERROR!");
                }
                break;

            case 19: //Tangent inverse
                line ();
                printf("\t\t\t\t\t\tTangent Inverse\n");
                printf("Enter opposite magnitude: ");
                scanf("%lf", &trig.opp);
                printf("Enter adjacent magnitude: ");
                scanf("%lf", &trig.adj);
                trig.ratio = trig.opp/trig.adj;
                answer = atan(trig.ratio);
                trig.answer_deg = answer * (180/pi);
                printf("\ntan^-1(%f) = %lfdeg", trig.ratio, trig.answer_deg);
                printf("\ntan^-1(%lf) = %lfrads", trig.ratio, answer);
                break;

            case 20:  //Permutation                          Robin 20-25
                line ();
                printf("\t\t\t\t\t\tPermutation\n");
                printf("Enter the value of n: ");
                scanf("%d", &n);
                printf("Enter the value of r: ");
                scanf("%d", &r);
                if (n>0 && r>0)
                {
                    answer = permutation(n, r);
                    printf("%lf", answer);
                }
                else
                {
                    printf("\nEnter a positive number!\n"); 
                }
                break;

            case 21:  //Combination
                line ();
                printf("\t\t\t\t\t\tCombination\n");
                printf("Enter the value of n: ");
                scanf("%d", &n);
                printf("Enter the value of r: ");
                scanf("%d", &r);
                if (n>0 && r>0)
                {
                    answer = combination (n, r);
                    printf("%lf", answer);
                }
                else
                {
                    printf("\nEnter a positive number!\n"); 
                }
                break;

            case 22:  //Ceil Function
                line ();
                printf("\t\t\t\t\t\tCeil Function\n");
                printf("Enter a value: ");
                scanf("%lf", &input);
                answer = ceil(input);
                printf("=%lf", answer);
                break;

            case 23:  //Floor Function
                line ();
                printf("\t\t\t\t\t\tFloor Function\n");
                printf("Enter a value: ");
                scanf("%lf", &input);
                answer = floor(input);
                printf("=%lf", answer);
                break;

            case 24:  //Differentiation
                line ();
                printf("\t\t\t\t\t\tDifferentiation\n");
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
                break;

            case 25:  //Integration
                line ();
                printf("\t\t\t\t\t\tIntegration\n");
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
                break;

            default:
                printf("\nInvalid Input!\n");    
        }
        do
        {
        printf("\n\nStill using the calculator? [y/n]: ");
        fflush(stdin);
        scanf("%c", &reply);
        }
        while(reply != 'y' && reply != 'n');
    }
    return 0;
} 