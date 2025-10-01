#include <stdio.h>

int main(void)
{

    float x = 1.234567890123456789;
    double y = 1.234567890123456789;
    printf("size of float = %lu\n", sizeof(float));
    printf("size of double = %lu\n", sizeof(double));
    printf("x = %30.25f\n", x);
    printf("y = %30.25f\n", y);

    return 0;
}