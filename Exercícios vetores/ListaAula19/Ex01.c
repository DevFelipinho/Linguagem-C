/*===============================================================

    1) Elaborar um algoritmo para receber um grupo de 50 valores do tipo inteiro. Após a
entrada, limpar a tela e mostrar o vetor em sua forma de entrada.
Logo em seguida, classificar em ordem crescente e depois mostra-lo no vídeo.
** usar funções.

    CURSO: ANALISE E DESENVOLVIMENTO DE SISTEMAS - ADS
    1º PERÍODO - DISCIPLINA DE ALGORITMO E LÓGICA DE PROGRAMAÇÃO
    Nome do aluno(a): Felipe Lara Facin
    1 SEMESTRE 2025
    Prof. Ernani Claudio Borges
    data: Maio 2025

*/
//===============================================================
//===============================================================
//======== LOCAL PARA DECLARAR AS INCLUDES E VARS GLOBAIS =======
//===============================================================
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <windows.h>
#include <conio.h>

#define tam 50

//===============================================================
//============== LOCAL PARA DECLARAR OS PROTOTIPOS ==============
//===============================================================






//===============================================================
//============== LOCAL PARA CRIAR OS MÓDULOS DE FUNÇÕES =========
//===============================================================

//===============================================================

//===============================================================

//===============================================================

//===============================================================

//===============================================================
//==============  CODIGO PRINCIPAL ==============================
//===============================================================
int main()
{
    //CRIAR VARIAVEIS

    int v[tam], i, j, aux;

    aux = 0;

    srand(time(NULL));

    for (i = 0; i<tam; i++)
    {
        v[i] = 0;
    }

    for (i = 0; i<tam; i++)
    {
        v[i] = rand() % (tam *2);
    }

    for (i =0; i<tam; i++)
    {
        printf("\n Vetor[%d] = %d", i, v[i]);
    }

    for (i = 0; i<tam; i++)
    {
        for (j = 0; j<tam - 1; j++)
        {
            if (v[j]>=v[j+1])
            {
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }

    for (i =0; i<tam; i++)
    {
        printf("\n Vetor[%d] = %d", i, v[i]);
    }

    //INICIALIZAR VARIAVEIS

    //FINALIZAR PROGRAMA

    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
