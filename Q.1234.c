#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char word[100];
    while (fgets(word, sizeof(word), stdin)!=EOF) {
        int l = strlen(word);
        if (word[l - 1] == '\n')
            word[l - 1] = '\0';
        int letter_count = 0;
        for (int i = 0; i < l; i++) {
            if (isalpha(word[i])) {
                if (letter_count % 2 == 0)
                    word[i] = toupper(word[i]);
                else
                    word[i] = tolower(word[i]);
                letter_count++;
            }
        }
        printf("%s\n", word);
    }
}
