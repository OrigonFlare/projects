#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char text[256];
    printf("Skriv in text: ");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = '\0';  // remove newline

    char cleanedText[100];
    char cleanedTextBackwards[100];

    int count = 0;
    for(int i = 0; i < strlen(text);i++){
        if(text[i] == ' ')
            continue;
        cleanedText[count] = tolower(text[i]);
        count++;
    }
    cleanedText[count] = 0;
    
    count = 0;
    for(int i = strlen(cleanedText)-1; i>=0 ;i--){
        cleanedTextBackwards[count] = cleanedText[i];
        count++;
    }
    cleanedTextBackwards[count] = 0;

    if(!strcmp(cleanedText,cleanedTextBackwards)){
        printf("palindrom");
    }
    else{
        printf("ej palindrom");
     }
     return 0;
}
