#include <stdio.h>

int main() {
    int n, max = 0, pos = 0;

    for (int i = 1; i <= 100; i++) {
        scanf("%d", &n);
        if (i == 1 || n > max) {  // For first number or new max
            max = n;
            pos = i;
        }
    }

    printf("%d\n%d\n", max, pos);

    return 0;
}

