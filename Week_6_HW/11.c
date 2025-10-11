#include <stdio.h>
#include <math.h>

int main(void)
{
    double distance_km, angle_deg;
    const double pi = acos(-1.0);

    printf("거리를 입력하시오(km): ");
    if (scanf("%lf", &distance_km) != 1)
        return 0;
    printf("각도를 입력하시오(도): ");
    if (scanf("%lf", &angle_deg) != 1)
        return 0;

    double theta_rad = angle_deg * pi / 180.0;
    double radius = distance_km / theta_rad;

    printf("지구의 반지름은 %.2f km 입니다.\n", radius);
    return 0;
}