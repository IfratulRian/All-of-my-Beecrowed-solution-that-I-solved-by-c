#include <stdio.h>

int main() {
    int a, b;
    while (1) {
        scanf("%d %d", &a, &b);
        if (a == 0 && b == 0) break;
        int arr[b];
        for (int i = 0; i < b; i++) {
            scanf("%d", &arr[i]);
        }
        int count = 0;
        for (int i = 0; i < b; i++) {
            if (arr[i] == 0) continue;
            int duplicate = 0;
            for (int j = i + 1; j < b; j++) {
                if (arr[i] == arr[j]) {
                    duplicate = 1;
                    arr[j] = 0;
                }
            }
            if (duplicate) count++;
        }
        printf("%d\n", count);
    }
    return 0;
}
