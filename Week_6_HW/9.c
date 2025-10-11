#include <stdio.h>

int main(void)
{
    double AC, AE, BC, DE;

    printf("지팡이의 높이를 입력하시오: ");
    if (scanf("%lf", &AC) != 1)
        return 0;

    printf("지팡이 그림자의 길이를 입력하시오: ");
    if (scanf("%lf", &AE) != 1)
        return 0;

    printf("피라미드까지의 거리를 입력하시오: ");
    if (scanf("%lf", &BC) != 1)
        return 0;
    DE = (AC * BC) / AE;

    printf("피라미드의 높이는 %.2f 입니다.\n", DE);
    return 0;
}