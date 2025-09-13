#include <stdio.h> // 함수가 들어있는 헤더 파일

int main(void)
{
    // 메인으로 돌아가는 함수
    // void : 함수가 받는 파라미터는 없음
    // int : return 값이 integer

    int x, y; // x, y를 메모리에 할당. 값은 쓰레기값 들어있음.

    scanf("%d %d", &x, &y); // x,y의 주소값을 찾아가 입력값을 대입

    printf("덧셈 : %d\n", x + y);   // 덧셈
    printf("뺄셈 : %d\n", x - y);   // 뺄셈
    printf("곱셈 : %d\n", x * y);   // 곱셉
    printf("나눗셈 : %d\n", x / y); // 나눗셈
    return 0;                       // 함수 종료 후 반환값은 0
}