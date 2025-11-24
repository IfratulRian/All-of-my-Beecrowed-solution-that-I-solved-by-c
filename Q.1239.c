
#include <stdio.h>

int main() {
    char line[1000];
    while (fgets(line, sizeof(line), stdin)) {
        int italic = 0, bold = 0;
        for (int i = 0; line[i] != '\0'; i++) {
            if (line[i] == '_') {
                if (italic == 0) {
                    printf("<i>");
                    italic = 1;
                } else {
                    printf("</i>");
                    italic = 0;
                }
            } else if (line[i] == '*') {
                if (bold == 0) {
                    printf("<b>");
                    bold = 1;
                } else {
                    printf("</b>");
                    bold = 0;
                }
            } else {
                putchar(line[i]);
            }
        }
    }
    return 0;
}
