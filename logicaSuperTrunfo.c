#include <stdio.h>

int main() {
    char codigoA[10] = "BR01", nomeA[50] = "CidadeA";
    int populacaoA = 1000000;
    float areaA = 1500.5, pibA = 50000.0;

    char codigoB[10] = "BR02", nomeB[50] = "CidadeB";
    int populacaoB = 800000;
    float areaB = 1300.0, pibB = 60000.0;

    printf("\nComparações:\n");

    if (populacaoA > populacaoB)
        printf("Maior população: %s\n", nomeA);
    else if (populacaoB > populacaoA)
        printf("Maior população: %s\n", nomeB);
    else
        printf("Empate em população\n");

    if (areaA > areaB)
        printf("Maior área: %s\n", nomeA);
    else if (areaB > areaA)
        printf("Maior área: %s\n", nomeB);
    else
        printf("Empate em área\n");

    if (pibA > pibB)
        printf("Maior PIB: %s\n", nomeA);
    else if (pibB > pibA)
        printf("Maior PIB: %s\n", nomeB);
    else
        printf("Empate em PIB\n");

    return 0;
}
