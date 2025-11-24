#include <stdio.h>

int main() {
    int a;
    while(scanf("%d", &a) != EOF) {
        for (int i = 1; i <= a; i += 2) {
            for (int j = 0; j < (a - i) / 2; j++) {
                printf(" ");
            }
            for (int j = 0; j < i; j++) {
                printf("*");
            }
            printf("\n");
        }

        for (int i = 1; i <= 3; i += 2) {
            for (int j = 0; j < (a - i) / 2; j++) {
                printf(" ");
            }
            for (int j = 0; j < i; j++) {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}
