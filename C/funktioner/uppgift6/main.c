#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

bool isVowel(char letter) {
    letter = tolower((unsigned char)letter);

    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' || letter == 'y') {
        return true;
    } else {
        return false;
    }
}

int main() {
    char input[256];
    int vokaler = 0;

    printf("Ange text: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';  // remove newline

    for (int i = 0; input[i] != '\0'; i++) {
        if (isalpha((unsigned char)input[i])) {
            if (isVowel(input[i])) {
                vokaler++;
            }
        }
    }
    printf("Vokaler: %d\n", vokaler);

    return 0;
}