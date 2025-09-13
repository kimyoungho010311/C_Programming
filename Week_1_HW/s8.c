#include <stdio.h>

int main(void)
{

    double f, c;
    printf("화씨값을 입력하시오 : ");
    scanf("lf", &f);

    c = (0.5 / 9.0) * (f - 32.0);
    printf("섭씨값은 %.2lf 입니다.", c);

    return 0;
}