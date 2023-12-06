#include <stdio.h>
void impresion(int x, int y, int z, int Matriz[x][y][z]);

int main(int argc, char const *argv[])
{
    int x, y, z;

    printf("Ingrese la dimension 1: ");
    scanf("%d", &x);
    printf("Ingrese la dimension 2: ");
    scanf("%d", &y);
    printf("Ingrese la dimension 3: ");
    scanf("%d", &z);
    int Matriz[x][y][z];

    for (int k = 0; k < x; k++)
    {
        for (int i = 0; i < y; i++)
        {
            for (int j = 0; j < z; j++)
            {
                Matriz[k][i][j] = 0;
            }
        }
    }

    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < z; j++)
        {

            Matriz[x - 1][i][j] = 1;
        }
    }
    printf("\nImpresion:  \n");
    impresion(x, y, z, Matriz[x][y][z]);

    return 0;
}

void impresion(int x, int y, int z, int Matriz[x][y][z])
{
    for (int k = 0; k < x; k++)
    {
        for (int i = 0; i < y; i++)
        {
            for (int j = 0; j < z; j++)
            {
                printf("%d\t", Matriz[k][i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
}