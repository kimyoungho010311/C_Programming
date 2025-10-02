#include <stdio.h>
#define SEC_PER_MINUTE 60

int main(void)
{

    int input, minute, second, hour;

    printf("초를 입력하세요 : ");
    scanf("%d", &input);
    minute = input / SEC_PER_MINUTE;
    second = input % SEC_PER_MINUTE;
    if (minute >= 60)
    {
        hour = minute / 60;
        minute = minute % 60;
        printf("%d초는 %d시 %d분 %d초입니다.", input, hour, minute, second);
        return 0;
    }
    printf("%d초는 %d분 %d초입니다.", input, minute, second);

    return 0;
}