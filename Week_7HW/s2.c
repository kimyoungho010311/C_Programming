#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int com = rand() % 3 + 1;
    int user;

    printf("(1: 가위, 2: 바위, 3: 보) 중에서 하나를 선택하시오 : ");
    scanf("%d", &user);

    int result = com - user;

    if (result == -1 || result == 2)
        printf("컴퓨터가 이겼습니다.");
    else if (result == 0)
        printf("비겼습니다.");
    else
        printf("사용자가 이겼습니다.");

    return 0;
}