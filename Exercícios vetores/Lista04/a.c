#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <time.h>
#define tam 5

void diferenca(int vet[]);
void imprimir(int vet[], int *i, int *j);
void entrada(int vet[]);


void entrada(int vet[])
{
    int j, i;

    j = 0;

    for (i = 0; i<tam; i++)
    {
        vet[i] = 1+ rand() % (tam);
        imprimir(vet, &i, &j);
        j++;
    }
}

void imprimir(int vet[], int *i, int *j)
{
    if(*j < 5)
    {
        printf("%-3d", vet[*i]);
    }

    else
    {
        printf("\n\n%-3d", vet[*i]);
        *j = 0;
    }
}

void diferenca(int vet[])
{
    int difeA, difeM, i;

    difeA = 0;
    difeM = 0;

    for (i = 0; i<tam-1; i++)
    {
        difeA = vet[i] - vet[i+1];

        if (difeA< 0)
            difeA *= -1;

        if(difeA >= difeM)
        {
            difeM = difeA;
        }
    }

    printf ("\n %d", difeM);

}


int main()
{
    srand(time(NULL));
    int i, vet[tam];

    for (i = 0; i<tam; i++)
        vet[i] = 0;

    entrada(vet);

    printf("\n\n Maior diferenca:\n");

    diferenca(vet);

    printf("\n\n Programa Finalizado!\n");
    return 0;
}
