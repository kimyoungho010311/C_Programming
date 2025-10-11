#include <stdio.h>

int main(void)
{

    int age, year;

    scanf("%d", &age);
    if (age >= 20)
    {
        printf("adult");
    }
    else
    {
        year = 20 - age;
        printf("%d years later", year);
    }

    return 0;
}