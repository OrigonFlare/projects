#include <stdio.h>

int main() {
    printf("1 Sverige, 2 Danmark, 3 Norge, 4 Finland, 5 Island, 0 Resten");
    int country;
    scanf("%d", &country);

    if (country == 1 || country == 2 || country == 3) {
        printf("Du bor i Skandinavien");
    } else if (country < 0 || country > 5) {
        printf("Felaktig inmatning");
    } else {
        printf("Du bor inte i Skandinavien");
    }
        

    return 0;
}