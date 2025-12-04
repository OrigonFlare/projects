#include <stdio.h>

int main() {
    printf("Ange summa pengar: ");
    int summa;
    scanf("%d", &summa);

    printf("Har du rabatt? (1 för ja, 0 för nej): ");
    int rabatt;
    scanf("%d", &rabatt);


    if (summa >= 15 && summa <= 25) {
        if (rabatt)
            printf("Du kan köpa en liten hamburgare och en pommes frites.");
        else
            printf("Du kan köpa en liten hamburgare.");
    }

    else if (summa > 25 && summa <= 50) {
        if (rabatt)
            printf("Du kan köpa en stor hamburgare och pommes frites.");
        else
            printf("Du kan köpa en stor hamburgare.");
    }

    else if (summa > 60 || (summa > 50 && summa <= 60 && rabatt))
        printf("Du kan köpa ett meal med dryck.");


    return 0;
}