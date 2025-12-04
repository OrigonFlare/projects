#include <stdio.h>

void main() {
    double rad;
    const float pi = 3.14159265358979323846;
    scanf("%lf", &rad);
    double omkrets = 2*rad*pi;
    printf("Omkrets är: %0.3lf", omkrets);
}