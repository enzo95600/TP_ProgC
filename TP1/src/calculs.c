#include <stdio.h>

int main(void) {
    int num1 = 12;
    int num2 = 5;
    char op = '&';

    switch (op) {
        case '+': printf("%d\n", num1 + num2); break;
        case '-': printf("%d\n", num1 - num2); break;
        case '*': printf("%d\n", num1 * num2); break;
        case '/': printf("%d\n", num1 / num2); break;
        case '%': printf("%d\n", num1 % num2); break;
        case '&': printf("%d\n", num1 & num2); break;
        case '|': printf("%d\n", num1 | num2); break;
        case '~': printf("%d\n", ~num1); break; /* Opérateur unaire : applique seulement sur num1 */
        default: printf("Opérateur invalide\n"); break;
    }

    return 0;
}
