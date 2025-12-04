#include <stdio.h>

void main() {
    int n;
    printf("Ge en tal");
    scanf("%d", &n);

    if (n>10) {
        printf("Talet är större än 10");
    } else {
        printf("Talet är mindre än 10");
    }
}