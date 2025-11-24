
#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    char line[55];
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; i++)
    {
        fgets(line, sizeof(line), stdin);
        int len = strlen(line);
        for (int j = 0; j < len; j++)
        {
            if (line[j] != ' ' && (j == 0 || line[j - 1] == ' '))
            {
                printf("%c", line[j]);
            }
        }
        printf("\n");
    }
    return 0;
}
