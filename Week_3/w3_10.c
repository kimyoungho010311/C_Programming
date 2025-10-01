#include <stdio.h>

int main(void)
{

    float k = 1.23456e-38;
    float x = 1.23456e-40;
    float y = 1.23456e-39;
    float z = 1.23456e-46;

    printf("k = %e\n", k);
    printf("x = %e\n", x);
    printf("y = %e\n", y);
    printf("z = %e\n", z);
    return 0;
}