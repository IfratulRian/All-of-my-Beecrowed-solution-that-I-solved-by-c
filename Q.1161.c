#include<stdio.h>

int main() {
    int a, b;
    while (scanf("%d %d", &a, &b) != EOF) {
        long long multiA = 1, multiB = 1;

        for (int i = 1; i <= a; i++) {
            multiA *= i;
        }
        for (int j = 1; j <= b; j++) {
            multiB *= j;
        }

        long long sum = multiA + multiB;
        printf("%lld\n", sum);
    }
    return 0;
}
