#include <stdio.h>

int main(void)
{

    int a, b, c, max;
    scanf("%d %d %d", &a, &b, &c);
    if (a > max)
        max = a;
    if (b > max)
        max = b;
    if (c > max)
        max = c;

    printf("최대값은 %d입니다. ", max);
    return 0;
}