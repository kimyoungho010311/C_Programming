#include <stdio.h>

int main(void)
{

    float weight_on_earth, weight_on_moon;

    printf("몸무게를 입력하시오(단위 : kg) : ");
    scanf("%f", &weight_on_earth);

    weight_on_moon = weight_on_earth * 0.17;

    printf("달에서의 몸무게는 %.2fkg입니다.", weight_on_moon);

    return 0;
}