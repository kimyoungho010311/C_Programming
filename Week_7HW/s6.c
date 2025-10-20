#include <stdio.h>

int main(void)
{
    char input;

    printf("문자를 입력하시오 : ");
    input = getchar();

    if (input == 'R' || input == 'r')
        printf("Rectangle\n");
    else if (input == 'T' || input == 't')
        printf("Triangle\n");
    else if (input == 'C' || input == 'c')
        printf("Circle\n");
    else
        printf("Unknown\n");

    return 0;
}