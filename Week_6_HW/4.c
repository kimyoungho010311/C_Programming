#include <stdio.h>
#include <math.h>

int main(void)
{
    int cm, feet;
    double inch;

    printf("키를 입력하시오(cm) : ");
    scanf("%d", &cm);

    inch = cm / 2.54;
    feet = (int)(inch / 12);

    printf("%dcm는 %d피트 %.2f인치입니다.\n", cm, feet, fmod(inch, 12));

    return 0;
}