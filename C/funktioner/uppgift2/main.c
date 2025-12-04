#include <stdio.h>

float moms(float tal) {
    float sum;
    float percent = 0.25;// 25% eller 20%?
    sum = tal*percent;

    return sum;
}

int main() {
    float input;
    printf("Ange pris inkl moms: ");
    scanf("%f", &input);
    float resultat = moms(input);
    printf("Moms: %.2f kr\n", resultat);

    return 0;
}