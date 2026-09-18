#include <stdio.h>

int main(void) {
    int i = 42;
    float f = 3.14f;

    int *pi = &i;
    float *pf = &f;

    /* Affichage avant manipulation. L'astuce (unsigned int*) lit la repr. mémoire hexa du float */
    printf("Avant la manipulation :\n");
    printf("Adresse de i : %p, Valeur de i : %x\n", (void*)pi, *pi);
    printf("Adresse de f : %p, Valeur de f : %x\n\n", (void*)pf, *(unsigned int*)pf);

    /* Manipulation via pointeurs */
    *pi = 100;
    *pf = 2.71f;

    /* Affichage après manipulation */
    printf("Après la manipulation :\n");
    printf("Adresse de i : %p, Valeur de i : %x\n", (void*)pi, *pi);
    printf("Adresse de f : %p, Valeur de f : %x\n", (void*)pf, *(unsigned int*)pf);

    return 0;
}