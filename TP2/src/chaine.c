#include <stdio.h>

int main(void) {
    char s1[100] = "Hello";
    char s2[] = " World!";
    char copy[100];
    int len1 = 0, len2 = 0;

    /* 1. Longueur */
    while (s1[len1] != '\0') len1++;
    while (s2[len2] != '\0') len2++;
    printf("Longueur de s1 : %d\n", len1);

    /* 2. Copie */
    for (int i = 0; i <= len1; i++) {
        copy[i] = s1[i];
    }
    printf("Copie : %s\n", copy);

    /* 3. Concaténation */
    for (int i = 0; i <= len2; i++) {
        s1[len1 + i] = s2[i];
    }
    printf("Concaténation : %s\n", s1);

    return 0;
}