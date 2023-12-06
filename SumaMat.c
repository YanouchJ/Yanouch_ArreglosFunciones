#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int fA, cA, fB, cB, fR, cR;
void aleatoriosA (int MatrizA[fA][cA]);
void aleatoriosB (int MatrizB[fB][cB]);
void SumaMatrices(int MatrizA[fA][cA], int MatrizB[fB][cB], int MatrizR[fR][cR]);

int main(int argc, char const *argv[])
{
    srand(time(NULL));

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

    printf("MATRIZ A: \n ");
    aleatoriosA (MatrizA[fA][cA]);

    return 0;
}

    void aleatoriosA (int MatrizA[fA][cA]){
        for (int i = 0; i < fA; i++)
        {
            for (int j = 0; j < cA; j++)
            {
                MatrizA[i][j]= rand % 101;
            }
            
        }
        
    }