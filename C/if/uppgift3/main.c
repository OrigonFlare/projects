#include <stdio.h>

int main() {
    float n;
    printf("Ge en tal");
    scanf("%f", &n);

    if (n<37.8) {
        printf("Du har inte feber");
    } 
    else if (n>39.5) {
        printf("Du bör uppsöka läkare");
    }
    else if (n>37.8) {
    printf("Du har feber");

    return 0;
}