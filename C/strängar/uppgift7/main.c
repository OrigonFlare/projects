#include <stdio.h>
#include <string.h>

int main() {
    char text[256];
    printf("Skriv in text: ");
    fgets(text, sizeof(text), stdin);

    int c = 0;
    for (int i=0; text[i]!='\0'; i++) {
        if (text[i] == ' ') {
            text[i] = '*';
            c++;
        }
    }

    printf("%s\n Antal * >> %d", text, c);

    return 0;
}