#include <stdio.h>
#include <stdbool.h>


bool myndig(int age) {
    return age >= 18;
}


int main() {
    int input;
    printf("Ange din ålder: ");
    scanf("%d", &input);
    if (myndig(input)) {
        printf("Du är myndig.\n");
    } else {
        printf("Du är inte myndig.\n");
    }

    return 0;
}