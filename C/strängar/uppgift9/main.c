#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char text[256];
    printf("Skriv in text: ");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = '\0';  // remove newline

    
    int c = 0;
    bool inWord = false; //fix for multiple spaces

    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] != ' ' && !inWord) {
            inWord = true;
            c++;
        } else if (text[i] == ' ') {
            inWord = false;
        }
    }

    printf("Antal ord: %d\n", c);
    return 0;
}
