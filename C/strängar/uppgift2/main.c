#include <stdio.h>

int main () {
    char name[256];
    int age;

    printf("Vad heter du? ");
    scanf("%s", name);
    printf("Hur gammal är du? ");
    scanf("%d", &age);

    if (age < 50) {
        printf("Hej %s du är %d år", name, age);
    } else {
        printf("Oj vad gammalt :)");
    }
    

    return 0;
}