#include <stdio.h>

int main() {
    int n;
    printf("Skriv in ålder: ");
    scanf("%d", &n);

    if (n<18) {
        printf("Du är minderårig");
    } else if (n>=18 && n<65) {
        printf("Du är vuxen");
    } else {
        printf("Du är pensionär");
    }

    return 0;
}