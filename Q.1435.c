#include <stdio.h>

int main()
{
    int N;
    while (1)
    {
        scanf("%d", &N);
        if (N == 0)
            break;

        int matrix[N][N];

        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                int top = i;
                int left = j;
                int bottom = N - 1 - i;
                int right = N - 1 - j;

                int min = top;
                if (left < min) min = left;
                if (bottom < min) min = bottom;
                if (right < min) min = right;

                matrix[i][j] = min + 1;
            }
        }

        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                printf("%3d", matrix[i][j]);
                if (j < N - 1) printf(" ");
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
