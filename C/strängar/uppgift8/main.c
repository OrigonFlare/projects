#include <stdio.h>
#include <string.h>

int main() {
    char text[256];
    printf("Skriv in email: ");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = '\0'; // remove newline


    char *atSign = strchr(text, '@');
    char *lastDot = strrchr(text, '.');

    if (atSign && lastDot && lastDot > atSign) {
        int after = strlen(lastDot + 1);
        if (after == 2 || after == 3) {
            printf("Giltig email\n");
            return 0;
        }
    } 
    
    printf("Ogiltig email\n");
    return 0;
}
