#include <stdio.h>

int main(void)
{
    int a, b, c;
    int min;
    printf("정수 3개를 입력하시오 : ");
    scanf("%d %d %d", &a, &b, &c);

    min = a;

    if (b < min)
        min = b; // min을 b로 업데이트
    if (c < min)
        min = c; // min을 c로 업데이트

    printf("제일 작은 정수는 %d입니다.\n", min);

    return 0;
}