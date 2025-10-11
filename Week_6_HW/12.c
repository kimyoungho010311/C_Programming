#include <stdio.h>

int main(void)
{
    unsigned char a, b, c, d;
    unsigned int result;

    printf("첫 번째 문자를 입력하시오: ");
    if (scanf(" %c", (char *)&a) != 1)
        return 0;
    printf("두 번째 문자를 입력하시오: ");
    if (scanf(" %c", (char *)&b) != 1)
        return 0;
    printf("세 번째 문자를 입력하시오: ");
    if (scanf(" %c", (char *)&c) != 1)
        return 0;
    printf("네 번째 문자를 입력하시오: ");
    if (scanf(" %c", (char *)&d) != 1)
        return 0;

    result = (unsigned int)a | ((unsigned int)b << 8) | ((unsigned int)c << 16) | ((unsigned int)d << 24);

    printf("결과 값 : %08X\n", result);
    return 0;
}