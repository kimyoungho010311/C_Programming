#include <stdio.h>

int main(void)
{

    float mile, m;
    printf("마일을 입력하시오: ");
    scanf("%f", &mile);
    m = mile * 1609;
    printf("%f 마일은 %.2f미터입니다.", mile, m);

    return 0;
}