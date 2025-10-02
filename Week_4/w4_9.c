#include <stdio.h>

int main(void)
{
    int son_height, son_weight, chu_height, chu_weight;

    scanf("%d %d", &son_height, &son_weight);
    scanf("%d %d", &chu_height, &chu_weight);

    if ((son_height > chu_height) && (son_weight > chu_weight))
    {
        printf("0");
    }

    return 0;
}