#include <stdio.h>

int main()
{
    float mass = 0.0;
    float speed = 0.0;
    float energy = 0.0;

    printf("질량(kg) : ");
    scanf("%f", &mass);

    printf("속도(m/s) : ");
    scanf("%f", &speed);

    energy = 0.5 * mass * speed * speed;

    printf("운동에너지(J) : %f\n", energy);

    return 0;
}