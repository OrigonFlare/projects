#include <stdio.h>

int main () {
    char name1[256];
    char name2[256];

    printf("Skriv in ditt förnamn: ");
    scanf("%s", name1);
    printf("Skriv in ditt efternamn: ");
    scanf("%s", name2);

    printf("Du heter: %s, %s", name2, name1);

    return 0;
}