#include <stdio.h>

int main() {

    int val;
    int tal1;
    int tal2;

    do {
        printf("Tal1: ");
        scanf("%d", &tal1);

        printf("Tal2: ");
        scanf("%d", &tal2);

        printf("Summa: %d \n", tal1 + tal2);
        printf("Vill du fortsätta(1 = Ja, 0 = Nej)?");
        scanf("%d", &val);
    } while (val == 1);
    

    return 0;
}