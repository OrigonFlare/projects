#include <stdio.h>
#include <stdlib.h>

int printRandoms(int min, int max) {  
    int rd_num = rand() % (max - min + 1) + min;
    return rd_num;
}

int main() {
    int dice1, dice2;
    char choice;

    while (1) {
        dice1 = printRandoms(1, 6);
        dice2 = printRandoms(1, 6);
        printf("Tarning 1: %d\n", dice1);
        printf("Tarning 2: %d\n", dice2);
        printf("Vill du kasta igen? (y/n): ");
        scanf(" %c", &choice);
        if (choice == 'n') {
            break;
        }
    }

    return 0;
}