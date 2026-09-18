#include <stdio.h>

int main(void) {
    char noms_prenoms[5][50] = {"Dupont Marie", "Martin Pierre", "Durand Paul", "Leroy Alice", "Moreau Jean"};
    char adresses[5][100] = {"Lyon", "Paris", "Marseille", "Lille", "Bordeaux"};
    float notes_c[5] = {16.5, 14.0, 12.5, 18.0, 10.0};
    float notes_os[5] = {12.1, 14.1, 15.0, 17.5, 11.5};

    for (int i = 0; i < 5; i++) {
        printf("Étudiant.e %d :\n", i + 1);
        printf("Nom et Prénom : %s\n", noms_prenoms[i]);
        printf("Adresse : %s\n", adresses[i]);
        printf("Note Programmation C : %.1f\n", notes_c[i]);
        printf("Note OS : %.1f\n\n", notes_os[i]);
    }

    return 0;
}