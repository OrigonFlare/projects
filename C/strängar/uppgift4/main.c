#include <stdio.h>
#include <string.h>

int main () {
    char text1[256];
    char text2[256];
    char text3[256];
    char texten[800];

    printf("Skriv in text 1: ");
    scanf("%s", text1);
    printf("Skriv in text 2: ");
    scanf("%s", text2);
    printf("Skriv in text 3: ");
    scanf("%s", text3);

    strcat(texten, text1);
    strcat(texten, " ");
    strcat(texten, text2);
    strcat(texten, " ");
    strcat(texten, text3);

    printf("%c och det är %d tecken", texten, strlen(texten));
   

    return 0;
}