#include <stdio.h>
#include <string.h>

int main() {
    char text[256];
    char letter;

    printf("Ange en text: ");
    fgets(text, sizeof(text), stdin);
    printf("Ange en bokstav: ");
    scanf(" %c", &letter);

    int c = 0;
    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] == letter) {
            c++;
        }
    }
    
    if (c == 0) {
        printf("Det finns inget %c i texten du matade in", letter);
    } else {
        printf("Jag hittade %c %d gånger", letter, c);
    }
    return 0;
}