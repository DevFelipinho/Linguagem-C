/*===============================================================

    Lista04_vetor_ex02 – Receber 50 números em um vetor do tipo inteiro de 50 posições. Validar durante a entrada
para que não receba números repetidos nesse vetor. No final, limpar a tela e mostrar o vetor em sua ordem
de entrada.
Obs.: fazer a validação durante a entrada de dados, ou seja, receber o número em sua posição do vetor, e
verificar nas posições anteriores se ele já existe, caso verdadeiro, receber outro número nesta mesma
posição e tornar a verificar; caso contrário receber o próximo. E assim por diante até encher o vetor.

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

#define tam 5

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

    int v[tam], i, j;

    //INICIALIZAR VARIAVEIS

    for (i = 0; i<tam; i++)
        v[i] = 0;

    for (i = 0; i<tam; i++)
    {
        printf ("\n V[%d] = ", i);
        fflush (stdin);
        scanf("%d", &v[i]);

        for (j = 0; j<i; j++)
        {
            if (v[i] == v[j])
            {
                i--;
            }
        }
    }


    for (i = 0; i<tam; i++)
    {
        printf ("\n Vetor[%d] = %d", i, v[i]);
    }
    //FINALIZAR PROGRAMA

    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
