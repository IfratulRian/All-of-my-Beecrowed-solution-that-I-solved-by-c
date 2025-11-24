#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    getchar();

    double totalSpent = 0.0;
    int totalFruits = 0;

    for (int i = 1; i <= n; i++) {
        double v;
        scanf("%lf", &v);
        getchar();
        totalSpent += v;

        char line[10000];
        fgets(line, sizeof(line), stdin);

        int count = 0;
        char *token = strtok(line, " \n");
        while (token != NULL) {
            count++;
            token = strtok(NULL, " \n");
        }

        totalFruits += count;
        printf("day %d: %d kg\n", i, count);
    }

    printf("%.2lf kg by day\n", totalFruits / (double)n);
    printf("R$ %.2lf by day\n", totalSpent / n);

    return 0;
}
