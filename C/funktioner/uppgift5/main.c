#include <stdio.h>

float calculateTaxesOnSalary(int salary) {
    if (salary >= 30000) {
        return salary * 0.33;
    } else if (salary < 15000) {
        return salary * 0.12;
    } else {
        return salary * 0.28;
    }
}

int main() {
    int input;
    printf("Ange din månadslön: ");
    scanf("%d", &input);
    float tax = calculateTaxesOnSalary(input);
    printf("Din skatt är: %.2f kr\n", tax);

    return 0;
}