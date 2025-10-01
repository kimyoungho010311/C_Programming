#include <stdio.h>

int main(void)
{
    int sal;
    float result;

    printf("연봉을 입력하시오(단위: 만원): ");
    scanf("%d", &sal);

    result = 1000000000.0f / (sal * 10000.0f);
    printf("10억을 모으는데 걸리는 시간(단위: 년): %.2f\n", result);

    return 0;
}