#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Matriz1(int fA, int cA, int MatrizA[fA][cA]);
void Matriz2(int fB, int cB, int MatrizB[fB][cB]);
/* void SumaMatrices(int MatrizA[fA][cA], int MatrizB[fB][cB], int MatrizR[fR][cR]);*/

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int fA, cA, fB, cB, fR, cR;
    printf("Dimensiones de la MATRIZ A\n");
    printf("FILAS: ");
    scanf("%d", &fA);
    printf("COLUMNAS: ");
    scanf("%d", &cA);
    int MatrizA[fA][cA];

    printf("MATRIZ A: \n ");
    for (int i = 0; i < fA; i++)
    {
        for (int j = 0; j < cA; j++)
        {
            MatrizA[i][j] = rand() % 101;
        }
    }

    printf("Dimensiones de la MATRIZ B\n");
    printf("FILAS: ");
    scanf("%d", &fB);
    printf("COLUMNAS: ");
    scanf("%d", &cB);
    int MatrizB[fB][cB];

    printf("MATRIZ B: \n ");
    for (int i = 0; i < fB; i++)
    {
        for (int j = 0; j < cB; j++)
        {
            MatrizB[i][j] = rand() % 101;
        }
    }

    printf("MATRIZ A: \n");
    Matriz1(fA, cA, MatrizA[fA][cA]);
    printf("\n");
    printf("MATRIZ B: \n");
    Matriz2(fB, cB, MatrizB[fB][cB]);

    return 0;
}

void Matriz1(int fA, int cA, int MatrizA[fA][cA])
{
    for (int i = 0; i < fA; i++)
    {
        for (int j = 0; j < cA; j++)
        {
            printf("%d\t", MatrizA[i][j]);
        }
        printf("\n");
    }
}

void Matriz2(int fB, int cB, int MatrizB[fB][cB])
{
    for (int i = 0; i < fB; i++)
    {
        for (int j = 0; j < cB; j++)
        {
            printf("%d\t", MatrizB[i][j]);
        }
        printf("\n");
    }
}