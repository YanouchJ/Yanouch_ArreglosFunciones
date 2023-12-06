#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int fA, cA, fB, cB, fC, cC;

    printf("Dimensiones de la MATRIZ A\n");
    printf("FILAS: ");
    scanf("%d", &fA);
    printf("COLUMNAS: ");
    scanf("%d", &cA);
    int MAtrizA[fA][cA];


    printf("Dimensiones de la MATRIZ B\n");
    printf("FILAS: ");
    scanf("%d", &fB);
    printf("COLUMNAS: ");
    scanf("%d", &cB);
    int MAtrizB[fB][cB];

    return 0;
}
