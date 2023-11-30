#include <stdio.h>
#include <math.h>

int main ()
{
    float x = -5.3;

    printf ("round %.2f = %.2f\n",x, round(x));
    printf ("ceil %.2f = %.2f\n",x, ceil(x));
    printf ("floor %.2f = %.2f\n",x, floor(x));
    printf ("trunc %.2f = %.2f\n",x, trunc(x));
}