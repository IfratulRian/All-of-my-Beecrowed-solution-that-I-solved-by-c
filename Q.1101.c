#include <stdio.h>

int main() {
    int n, m;

    while (1) {
        scanf("%d %d", &n, &m);

        if (n <= 0 || m <= 0) break;

        int start = n < m ? n : m;
        int end   = n > m ? n : m;
        int sum = 0;

        for (int i = start; i <= end; i++) {
            printf("%d ", i);
            sum += i;
        }
        printf("Sum=%d\n", sum);
    }
    return 0;
}
