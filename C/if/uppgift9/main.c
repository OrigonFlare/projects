#include <stdio.h>

int main() {
    printf("Ange belopp att betala: ");
    int belopp;
    scanf("%d", &belopp);

    int femhundra = belopp / 500;
    belopp = belopp % 500;

    int tvahundra = belopp / 200;
    belopp = belopp % 200;

    int hundra = belopp / 100;
    belopp = belopp % 100;

    int femtio = belopp / 50;
    belopp = belopp % 50;

    int tjugo = belopp / 20;
    belopp = belopp % 20;

    int tio = belopp / 10;
    belopp = belopp % 10;

    int en = belopp;

    if(femhundra > 0)
        printf("%d 500-lapp ", femhundra);
    if(tvahundra > 0)
        printf("%d 200-lapp ", tvahundra);
    if(hundra > 0)
        printf("%d 100-lapp ", hundra);
    if(femtio > 0)
        printf("%d 50-lapp ", femtio);
    if(tjugo > 0)
        printf("%d 20-lapp ", tjugo);
    if(tio > 0)
        printf("%d 10 krona ", tio);
    if(en > 0)
        printf("%d enkronor", en);

    return 0;
}