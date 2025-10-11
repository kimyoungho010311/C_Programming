#define PI 3.14
#include <stdio.h>
#include <math.h>

int main(void)
{
    float r;
    printf("구의 반지름을 입력하시오 : ");
    scanf("%f", &r);
    printf("표면적은 %.2f입니다.", 4 * PI * pow(r, 2));
    printf("체적은 %.2f입니다.", 4 / 3 * PI * pow(r, 3));

    return 0;
}