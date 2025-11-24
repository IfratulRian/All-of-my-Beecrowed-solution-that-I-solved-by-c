#include <stdio.h>

int main() {
    int a, b;
    scanf("%d", &a);
    for (int i = 0; i < a; i++) {
        scanf("%d", &b);
        int sum = 0;
        for (int j = 1; j < b; j++) {
            if (b % j == 0) {
                sum += j;
            }
        }
        if (sum == b)
            printf("%d eh perfeito\n", b);
        else
            printf("%d nao eh perfeito\n", b);
    }
    return 0;
}
