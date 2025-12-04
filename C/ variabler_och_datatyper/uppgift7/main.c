#include <stdio.h>

void main() {
    int days;
    int addDays;
    int totalDays;

    printf("Hur många dagar är kursen?\n");
    scanf("%d", &days);
    printf("Hur många dagar vill du lägga till?\n");
    scanf("%d", &addDays);
    totalDays = days+addDays;

    printf("Jaha du vill att kursen ska vara %d dagar", totalDays);
}