#include <stdio.h>

int main(void)
{
    double x, y;
    printf("x 좌표를 입력하시오: ");
    if (scanf("%lf", &x) != 1)
        return 0;
    printf("y 좌표를 입력하시오: ");
    if (scanf("%lf", &y) != 1)
        return 0;

    (x == 0.0 && y == 0.0) ? printf("원점\n") : (x == 0.0)         ? printf("y축 위\n")
                                            : (y == 0.0)           ? printf("x축 위\n")
                                            : (x > 0.0 && y > 0.0) ? printf("1 사분면\n")
                                            : (x < 0.0 && y > 0.0) ? printf("2 사분면\n")
                                            : (x < 0.0 && y < 0.0) ? printf("3 사분면\n")
                                                                   : printf("4 사분면\n");

    return 0;
}