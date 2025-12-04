#include <stdio.h>

int main() {
    int choice;

    while (1) {
        printf("\n1. Spela spel\n2. Se highscore\n3. Avsluta\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Spelet startar");
            break;

        case 2:
            printf("High score");
            break;
        
        case 3:
            return 0;
        
        default:
            printf("Ogiltigt val");
            break;
        }
    }

    return 0;
}