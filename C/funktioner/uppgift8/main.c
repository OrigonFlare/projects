#include <stdio.h>

void Swap(int *p1, int *p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main() {
    int i = 1;
    int j = 2;

    Swap(&i, &j);

    printf("i: %d, j: %d\n", i, j);
    return 0;
}