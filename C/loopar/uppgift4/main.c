#include <stdio.h>

int main() {
    int tal;
    int sum = 0;

    for (int i=0; i<10; i++) {
        printf("Tal %d: ", i+1);
        scanf("%d", &tal);
        sum += tal;
    }
    printf("Summa: %d", sum);

    return 0;
}