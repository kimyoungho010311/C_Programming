#include <stdio.h>

int main(void)
{

    double a, b, c, dis;
    scanf("%lf %lf %lf", &a, &b, &c);

    dis = pow(b, 2) - (4 * a * c);
    if (a == 0)
        printf("방정식의 근은 %f 입니다.", -c / b);
    else if (dis > 0)
    {
        printf("첫번째 방정식의 근은 %f 입니다. \n", (-b + sqrt(dis) / (2.0 * a)));
        printf("첫번째 방정식의 근은 %f 입니다. \n", (-b - sqrt(dis) / (2.0 * a)));
    }
    else
        printf("실근은 존재하지 않습니다.");

    return 0;
}