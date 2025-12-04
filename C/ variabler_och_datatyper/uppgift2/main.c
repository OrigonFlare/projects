#include <stdio.h>
#include <stdlib.h>

void main() {
    char *name = getenv("USER");
    printf("%s", name);
}