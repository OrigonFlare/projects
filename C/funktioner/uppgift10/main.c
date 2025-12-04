#include <stdio.h>
#include <stdbool.h>


bool addBonus(int* salary, int age) {
    if (age > 50 && *salary > 30000) {
        *salary *= 1.1;
        return true;
    }
    return false;
}

int main() {
    int salary = 35000;
    int age = 55;

    addBonus(&salary, age);

    printf("Total salary %d", salary);
    return 0;
}