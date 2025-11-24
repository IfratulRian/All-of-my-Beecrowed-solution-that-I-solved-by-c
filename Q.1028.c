#include <stdio.h>
int main()
{
    int n, a, b, temp = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &a, &b);

        while (b != 0)
        {
            temp = a % b;
            a = b;
            b = temp;
        }

        printf("%d\n", a);
    }

    return 0;
}
