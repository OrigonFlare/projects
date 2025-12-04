#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>


bool isVowel(char letter) {
    letter = tolower((unsigned char)letter);

    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' || letter == 'y' || letter == ' ') {
        return true;
    } else {
        return false;
    }
}

void translate(char *input , char *output) {
    char temp[4];
    for (int i = 0; input[i] != '\0'; i++) {
        if (isVowel(input[i]) == false) {
            sprintf(temp, "%c%c%c", input[i], 'o', input[i]);
            strcat(output, temp);
        } else {
            sprintf(temp, "%c", input[i]);
            strcat(output, temp);
        }
    }
}

int main() {
    char input[256];
    char output[256] = "";

    printf("Ange text: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';  // remove newline

    translate(input, output);

    printf("%s", output);
    return 0;
}