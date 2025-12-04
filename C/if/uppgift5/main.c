#include <stdio.h>

int main() {
    printf("Vilken kategori tillhör du?\n");
    printf("1. vuxen \n 2. pensionär \n 3. student \n");
    int n;
    scanf("%d", &n);

    if (n==2 || n==3) {
        printf("Pris: 20kr");
    } else if (n==1) {
        printf("Pris: 30kr");
    } else {
        printf("Felaktig inmatning");
    }

    return 0;
}