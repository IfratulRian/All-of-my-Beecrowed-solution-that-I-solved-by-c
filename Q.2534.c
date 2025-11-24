#include <stdio.h>

int main()
{
    int N, Q;
    while (scanf("%d %d", &N, &Q) != EOF)
    {
        int grades[110], query[110], temp;
        for (int i = 0; i < N; i++)
            scanf("%d", &grades[i]);
        for (int i = 0; i < Q; i++)
        scanf("%d", &query[i]);
        for (int i = 0; i < N - 1; i++)
        {
            for (int j = i + 1; j < N; j++)
            {
                if (grades[i] < grades[j])
                {
                    temp = grades[i];
                    grades[i] = grades[j];
                    grades[j] = temp;
                }
            }
        }
        for (int i = 0; i < Q; i++)
        {
            int pos = query[i];
            printf("%d\n", grades[pos - 1]);
        }
    }
}
