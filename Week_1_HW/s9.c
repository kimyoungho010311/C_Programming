#include <stdio.h>

int main(void)
{

    float f, result;

    printf("실수를 입력하시오: ");
    scanf("%f", &f);

    result = 3 * f * f + 7 * f + 11;

    printf("다항식의 값은 : %.2f", result);
    return 0;
}