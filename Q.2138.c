#include <stdio.h>
#include <string.h>

int main() {
char num[1100];
while (scanf("%s", num) != EOF) {
    int freq[10];
    for (int i = 0; i < strlen(num); i++) {
        if (num[i] >= '0' && num[i] <= '9') {
        freq[num[i] - '0']++;
        }
    }
    int max = 0, most = 0;
    for (int i = 0; i < 10; i++) {
        if (freq[i] >= max) {
        max = freq[i];
        most = i;
        }
    }
    printf("%d\n", most);
}
}
