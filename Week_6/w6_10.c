#include <stdio.h>

int main(void)
{

    float weight;
    scanf("%f", &weight);

    if (weight > 88.45)
        printf("Heavyweight");
    else if (weight <= 88.45)
        printf("Cruiserweight");
    else if (weight <= 72.57)
        printf("Middleweight");
    else if (weight <= 61.23)
        printf("Lightweight");
    else if (weight <= 50.80)
        printf("Flyweight");
    return 0;
}