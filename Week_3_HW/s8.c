#include <stdio.h>

int main()
{

    int i = 255;

    printf("%o\n", i);
    printf("%x\n", i);

    i = -1;
    printf("%x\n", i);

    i = -2;
    printf("%x\n", i);

    i = -3;
    printf("%x\n", i);

    return 0;
}