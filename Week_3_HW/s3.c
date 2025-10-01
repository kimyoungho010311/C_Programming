#include <stdio.h>
#define SQMETER_PER_PYEONG 3.3058;

int main()
{

    int m = 0;
    float pyeong = 0.0;

    printf("평을 입력하세요 : ");
    scanf("%d", &m);

    pyeong = m * SQMETER_PER_PYEONG;

    printf("\n%f평방미터 입니다.", pyeong);

    return 0;
}