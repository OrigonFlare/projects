#include <stdio.h>

void main() {
    int num1;
    int num2;

    printf("Vad kostar hotellet per natt?\n");
    scanf("%d", &num1);
    printf("Hur många nätter?\n");
    scanf("%d", &num2);

    printf("%d", num1*num2);
}