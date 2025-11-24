#include <stdio.h>
#include <string.h>

int main() {
    int a;
    char line[] = "LIFE IS NOT A PROBLEM TO BE SOLVED";
    scanf("%d", &a);

    for (int i = 0; i < a; i++) {
        printf("%c", line[i]);
    }
    printf("\n");

}
