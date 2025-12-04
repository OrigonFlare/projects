#include <stdio.h>

int plussaTalMindre100(int x, int y){
    int sum;
    if (x < 100 && y < 100){
        sum = x + y;
    } else if (x < 100){
        sum = x;
    } else if (y < 100){
        sum = y;
    } else {
        sum = 0;
    }

    return sum;
}

int main() {
    int input1, input2;
    printf("Ange två heltal: ");
    scanf("%d %d", &input1, &input2);
    int resultat = plussaTalMindre100(input1, input2);
    printf("Resultat: %d\n", resultat);

    return 0;
}