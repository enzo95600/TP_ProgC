#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 11

int main(void) {
    srand(time(NULL));

    int tab_i[TAILLE];
    float tab_f[TAILLE];

    int *pi = tab_i;
    float *pf = tab_f;

    /* Remplissage */
    for (int i = 0; i < TAILLE; i++) {
        *(pi + i) = rand() % 150;
        *(pf + i) = (float)(rand() % 1000) / 100.0f;
    }

    /* Affichage Avant */
    printf("Tableau d'entiers (avant) :\n");
    for (int i = 0; i < TAILLE; i++) printf("%d ", *(pi + i));
    
    printf("\n\nTableau de flottants (avant) :\n");
    for (int i = 0; i < TAILLE; i++) printf("%.2f ", *(pf + i));

    /* Manipulation : x3 si indice pair */
    for (int i = 0; i < TAILLE; i++) {
        if (i % 2 == 0) {
            *(pi + i) *= 3;
            *(pf + i) *= 3.0f;
        }
    }

    /* Affichage Après */
    printf("\n\nTableau d'entiers (après) :\n");
    for (int i = 0; i < TAILLE; i++) printf("%d ", *(pi + i));
    
    printf("\n\nTableau de flottants (après) :\n");
    for (int i = 0; i < TAILLE; i++) printf("%.2f ", *(pf + i));
    printf("\n");

    return 0;
}