#include <stdio.h>
#include <string.h>

int main()
{
    char a[1001];

    while (scanf("%s", a) != EOF)
    {
        int count = 0;

        for (int i = 0; i < strlen(a); i++)
        {
            if (a[i] == '0')
                count++;
            else if (a[i] == '1')
                count++;
            else if (a[i] == '2')
                count++;
            else if (a[i] == '3')
                count++;
            else if (a[i] == '4')
                count++;
            else if (a[i] == '5')
                count++;
            else if (a[i] == '6')
                count++;
            else if (a[i] == '7')
                count++;
            else if (a[i] == '8')
                count++;
            else if (a[i] == '9')
                count++;
        }

        printf("%d\n", count);
    }

    return 0;
}
