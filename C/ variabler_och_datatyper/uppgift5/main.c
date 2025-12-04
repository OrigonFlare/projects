#include <stdio.h>

void main() {
    printf("char %ld %ld\n", sizeof(char), sizeof(char)*8);
    printf("short %ld %ld\n", sizeof(short), sizeof(short)*8);
    printf("int %ld %ld\n", sizeof(int), sizeof(int)*8);
    printf("long %ld %ld\n", sizeof(long), sizeof(long)*8);
    //printf("llong %ld %ld\n", sizeof(llong), sizeof(llong)*8);
    printf("float %ld %ld\n", sizeof(float), sizeof(float)*8);
    printf("double %ld %ld\n", sizeof(double), sizeof(double)*8);
}