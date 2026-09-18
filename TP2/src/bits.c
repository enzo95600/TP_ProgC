#include <stdio.h>

int main(void) {
    /* Hypothèse : entier codé sur 32 bits. 4ème de gauche = bit 28, 20ème = bit 12 */
    unsigned int d = 0x10001000; 

    int bit4 = (d >> (32 - 4)) & 1;
    int bit20 = (d >> (32 - 20)) & 1;

    if (bit4 == 1 && bit20 == 1) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}