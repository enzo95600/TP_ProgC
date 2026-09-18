#include <stdio.h>
#include <string.h>

struct Etudiant {
    char nom[30];
    char prenom[30];
    char adresse[100];
    float note_c;
    float note_os;
};

int main(void) {
    struct Etudiant promo[5];

    /* Initialisation manuelle pour l'exemple */
    strcpy(promo[0].nom, "Dupont"); strcpy(promo[0].prenom, "Marie"); strcpy(promo[0].adresse, "20, Boulevard Niels Bohr, Lyon");
    promo[0].note_c = 16.5; promo[0].note_os = 12.1;

    strcpy(promo[1].nom, "Martin"); strcpy(promo[1].prenom, "Pierre"); strcpy(promo[1].adresse, "22, Boulevard Niels Bohr, Lyon");
    promo[1].note_c = 14.0; promo[1].note_os = 14.1;

    /* Remplissage générique pour les 3 autres */
    for (int i = 2; i < 5; i++) {
        strcpy(promo[i].nom, "Nom"); strcpy(promo[i].prenom, "Prenom"); strcpy(promo[i].adresse, "Adresse");
        promo[i].note_c = 10.0; promo[i].note_os = 10.0;
    }

    /* Affichage */
    for (int i = 0; i < 5; i++) {
        printf("Étudiant.e %d :\nNom : %s\nPrénom : %s\nAdresse : %s\nNote 1 : %.1f\nNote 2 : %.1f\n\n",
               i + 1, promo[i].nom, promo[i].prenom, promo[i].adresse, promo[i].note_c, promo[i].note_os);
    }

    return 0;
}