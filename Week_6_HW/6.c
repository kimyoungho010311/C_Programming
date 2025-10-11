#include <stdio.h>
#include <math.h>

int main(void)
{
    double a = 1.0 - 0.9;
    double b = 0.1;

    if (fabs(a - b) < 0.000001)
    {
        printf("(1.0 - 0.9) == 0.1 은 1입니다.\n");
    }
    else
    {
        printf("(1.0 - 0.9) == 0.1 은 0입니다.\n");
    }

    return 0;
}