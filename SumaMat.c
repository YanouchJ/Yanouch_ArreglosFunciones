#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Declaracion de funcionesa
void matrizA(int fA, int cA, int MatrizA[fA][cA]);
void matrizB(int fB, int cB, int MatrizB[fB][cB]);
void SumaMatrices(int fA, int cA, int fB, int cB, int fR, int cR, int MatrizA[fA][cA], int MatrizB[fB][cB], int MatrizR[fR][cR]);
void matrizR(int fR, int cR, int MatrizR[fR][cR]);

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int fA, cA, fB, cB, fR, cR;
    // Dimensiones para la matriz A
    printf("Dimensiones de la MATRIZ A\n");
    printf("FILAS: ");
    scanf("%d", &fA);
    printf("COLUMNAS: ");
    scanf("%d", &cA);
    int MatrizA[fA][cA];
    // Generacion de numeros aleatorios matriz A
    for (int i = 0; i < fA; i++)
    {
        for (int j = 0; j < cA; j++)
        {
            MatrizA[i][j] = rand() % 101;
        }
    }
    // Dimensiones para la matriz B
    printf("Dimensiones de la MATRIZ B\n");
    printf("FILAS: ");
    scanf("%d", &fB);
    printf("COLUMNAS: ");
    scanf("%d", &cB);
    int MatrizB[fB][cB];
    // Generacion de numeros aleatorios matriz B
    for (int i = 0; i < fB; i++)
    {
        for (int j = 0; j < cB; j++)
        {
            MatrizB[i][j] = rand() % 101;
        }
    }
    // Impresion de la matriz A
    printf("MATRIZ A: \n");
    matrizA(fA, cA, MatrizA[fA][cA]);
    // Impresion de la matriz B
    printf("MATRIZ B: \n");
    matrizB(fB, cB, MatrizB[fB][cB]);
    ////Impresion de la matriz resultante
    int MatrizR[fR][cR];
    printf("MATRIZ RESULTANTE: \n");
    matrizR(fR, cR, MatrizR[fR][cR]);

    return 0;
}
// Funcion para imprimir la matriz A
void matrizA(int fA, int cA, int MatrizA[fA][cA])
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
// Funcion para imprimir la matriz B
void matrizB(int fB, int cB, int MatrizB[fB][cB])
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
// Funcion para realizar la suma de matrices
void SumaMatrices(int fA, int cA, int fB, int cB, int fR, int cR, int MatrizA[fA][cA], int MatrizB[fB][cB], int MatrizR[fR][cR])
{
    fR = fA, cR = cA;
    for (int i = 0; i < fR; i++)
    {
        for (int j = 0; j < cR; j++)
        {
            MatrizR[i][j] = (MatrizA[i][j]) + (MatrizB[i][j]);
        }
    }
}
// Funcion para imprimir la matriz resultante
void matrizR(int fR, int cR, int MatrizR[fR][cR])
{
    for (int i = 0; i < fR; i++)
    {
        for (int j = 0; j < cR; j++)
        {
            printf("%4d\t", MatrizR[i][j]);
        }
        printf("\n");
    }
}