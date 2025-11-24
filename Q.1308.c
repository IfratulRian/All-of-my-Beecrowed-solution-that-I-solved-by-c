#include <stdio.h>

int main() {
    int T;
    long long N;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        scanf("%lld", &N);
        long long sum = 0, rows;
        for (rows = 1; ; rows++) {
            sum += rows;
            if (sum > N) break;
        }
        printf("%lld\n", rows - 1);
    }

    return 0;
}
