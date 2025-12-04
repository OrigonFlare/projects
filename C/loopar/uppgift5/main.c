#include <stdio.h>

int main() {
    int tal;
    printf("Ange ett tal: ");
    scanf("%d", &tal);
    tal--;

    for (tal; tal > 0; tal--) {
        printf("%d\n", tal);
    }

    return 0;
}