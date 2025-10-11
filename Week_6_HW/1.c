#include <stdio.h>

int main(void)
{

    int a, b, div, rest;
    printf("정수 2개를 입력하시오 : ");
    scanf("%d %d", &a, &b);

    div = a / b;
    rest = a % b;

    printf("몫 : %d\n", div);
    printf("나머지 : %d\n", rest);
    return 0;
}