#include <stdio.h>
#include <string.h>

int main () {
    char text[256];
    char letter;

    printf("Ange en text: ");
    fgets(text, sizeof(text), stdin);
    printf("Ange en bokstav: ");
    scanf(" %c", &letter);

    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] == letter) {
            printf("Det första stället jag hittade %c på var position %d", letter, i+1);
            return 0;
        }
    }
    printf("Det finns inget %c i texten du matade in", letter);
    return 0;
}