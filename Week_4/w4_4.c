#include <stdio.h>

int main(void)
{

    int a, b, q, r;
    scanf("%d %d", &a, &b);
    q = a / b;
    r = a % b;
    printf("%d / %d = %d ... %d", a, b, q, r);
    return 0;
}