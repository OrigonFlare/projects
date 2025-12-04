#include <stdio.h>

int main() {
    printf("Ange tal: ");
    int tal;
    scanf("%d", &tal);

    switch (tal) {
        case 1:
            printf("Måndag");
            break;
        case 2:
            printf("Tisdag");
            break;
        case 3:
            printf("Onsdag");
            break;
        case 4:
            printf("Torsdag");
            break;
        case 5:
            printf("Fredag");
            break;
        case 6:
            printf("Lördag");
            break;
        case 7:
            printf("Söndag");
            break;
        
        default:
            printf("Ogiltig dag");
            break;
    }

    return 0;
}