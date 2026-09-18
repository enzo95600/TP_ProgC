#include <stdio.h>

int main(void) {
    int num = 4096; /* Remplace ici par 0, 4096, 65536, 65535 ou 1024 */
    int affichage = 0;

    printf("%d en binaire : ", num);

    if (num == 0) {
        printf("0\n");
        return 0;
    }

    /* On parcourt les 32 bits de gauche à droite */
    for (int i = 31; i >= 0; i--) {
        int bit = (num >> i) & 1;

        if (bit == 1) {
            affichage = 1; /* On commence à afficher dès le premier 1 rencontré */
        }

        if (affichage) {
            printf("%d", bit);
        }
    }
    printf("\n");

    return 0;
}