#include <stdio.h>

int main() {
    printf("Tal1: ");
    int tal1;
    scanf("%d", &tal1);

    printf("Tal2: ");
    int tal2;
    scanf("%d", &tal2);

    for(int i=tal1; i<=tal2; i++) {
        printf("%d\n", i);
    }

    while(tal1 <= tal2) {
        printf("%d\n", tal1);
        tal1++;
    }

    return 0;
}