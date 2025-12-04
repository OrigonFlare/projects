#include <stdio.h>

int main() {
    printf("Ange födelseår: ");
    int year;
    scanf("%d", &year);

    if (year >= 1980 && year < 1990) {
        printf("Du är född på 1980-talet");
    } else if (year < 2000 && year >= 1990) {
        printf("Du är född på 1990-talet");
    } else {
        printf("Du är inte född på 1980- eller 1990-talet");
    }

    return 0;
}