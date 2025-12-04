#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int printRandoms(int min, int max) {  
    int rd_num = rand() % (max - min + 1) + min;
    return rd_num;
}

int main() {
    int dice;
    char choice;

    while (1) {
        dice = printRandoms(1, 20);
        printf("Tarning: %d\n", dice);
        printf("Vill du kasta igen? (y/n): ");
        scanf(" %c", &choice);
        if (choice == 'n') {
            break;
        }
    }

    

    return 0;
}
