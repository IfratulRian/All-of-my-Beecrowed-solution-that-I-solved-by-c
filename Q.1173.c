#include <stdio.h>

int main()
{
    int v;
    if (scanf("%d", &v) != 1) return 0;
    int value = v;
    for (int i = 0; i < 10; ++i)
    {
        printf("N[%d] = %d\n", i, value);
        value *= 2;
    }
    return 0;
}
