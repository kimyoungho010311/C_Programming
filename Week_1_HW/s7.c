#include <stdio.h>

int main(void)
{
    float base, height, area;
    printf("삼각형의 밑변 : ");
    scanf("%f", &base);
    printf("삼각형의 높이 : ");
    scanf("%f", &height);
    area = 0.5 * height * base;
    printf("삼각형의 넓이 : %f", area);
    return 0;
}