#include <stdio.h>
#include <string.h>


char *hittaLangstaOrdet(char *str1, char *str2, char *str3) {
    if (strlen(str1) > strlen(str2) && strlen(str1) > strlen(str3)) {
        return str1;
    } else if (strlen(str2) > strlen(str1) && strlen(str2) > strlen(str3)) {
        return str2;
    } else {
        return str3;
    }
}


int main() {
    char str1[100], str2[100], str3[100];
    printf("Ange tre ord: ");
    scanf("%s %s %s", str1, str2, str3);

    char *ord = hittaLangstaOrdet(str1, str2, str3);

    printf("Längsta ordet är: %s\n", ord);

    return 0;
}