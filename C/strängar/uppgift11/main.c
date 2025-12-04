#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

int main() {
    char text[256];
    printf("Skriv in text: ");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = '\0';  // remove newline

    bool inWord = false; //fix for multiple spaces

    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] != ' ' && !inWord) {
            inWord = true;
            text[i] = toupper(text[i]);

        } else if (text[i] == ' ') {
            inWord = false;
            text[i + 1] = tolower(text[i + 1]);
        }
    }

    printf("%s", text);
    return 0;
}
