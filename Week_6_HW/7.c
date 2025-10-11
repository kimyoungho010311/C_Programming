#include <stdio.h>

int main(void)
{
    int a, b;

    printf("정수를 입력하시어 : ");
    scanf("%d", &a);
    printf("2를 곱하고 싶은 횟수 : ");
    scanf("%d", &b);

    printf("%d<<%d의 값 : %d", a, b, a << b);

    return 0;
}
