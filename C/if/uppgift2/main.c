#include <stdio.h>

int main() {
    int n;
    printf("Ge en tal");
    scanf("%d", &n);

    if (n<10) {
        printf("Beställ 30 paket");
    } else if (10<n && n<20) {
        printf("Beställ 20 paket");
    } else {
        printf("Du behöver inte beställa någon mjölk");
    }

    return 0;
}