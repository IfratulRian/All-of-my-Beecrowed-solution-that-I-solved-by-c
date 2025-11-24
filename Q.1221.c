#include <stdio.h>
#include <math.h>

int main() {
    int N;
    unsigned int X;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%u", &X);

        int is_prime = 1;

        if (X < 2) {
            is_prime = 0;
        } else if (X == 2) {
            is_prime = 1;
        } else if (X % 2 == 0) {
            is_prime = 0;
        } else {
            unsigned int limit = (unsigned int)sqrt(X);
            for (unsigned int j = 3; j <= limit; j += 2) {
                if (X % j == 0) {
                    is_prime = 0;
                    break;
                }
            }
        }

        if (is_prime)
            printf("Prime\n");
        else
            printf("Not Prime\n");
    }

    return 0;
}
