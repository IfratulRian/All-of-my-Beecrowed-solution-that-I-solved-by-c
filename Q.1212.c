#include <stdio.h>
#include <string.h>

int main()
{
    char a[15], b[15];

    while (1)
    {
        scanf("%s %s", a, b);

        if (strcmp(a, "0") == 0 && strcmp(b, "0") == 0)
            break;

        int len1 = strlen(a);
        int len2 = strlen(b);
        int carry = 0, count = 0;

        int i = len1 - 1, j = len2 - 1;

        while (i >= 0 || j >= 0)
        {
            int digit1 = (i >= 0) ? a[i] - '0' : 0;
            int digit2 = (j >= 0) ? b[j] - '0' : 0;

            int sum = digit1 + digit2 + carry;
            if (sum >= 10)
            {
                carry = 1;
                count++;
            }
            else
            {
                carry = 0;
            }

            i--;
            j--;
        }

        if (count == 0)
            printf("No carry operation.\n");
        else
            printf("%d carry operations.\n", count);
    }

    return 0;
}
