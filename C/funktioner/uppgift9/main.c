#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>


void titleCase(char *txt){
    bool beforeWasSpace = true;

    for(int i = 0; txt[i] != '\0'; i++){
        if(beforeWasSpace)  txt[i] = toupper(txt[i]);
        if(txt[i] == ' ')   beforeWasSpace = true;
        else                beforeWasSpace = false;
    }
}

int main() {
    char input[256];

    printf("Ange text: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';  // remove newline

    titleCase(input);
    printf("%s\n", input);

    return 0;
}