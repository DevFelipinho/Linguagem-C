/*===============================================================

    Lista02_vetor_ex05 – Elabore um algoritmo que receba um vetor A de 20 posições do tipo inteiro. Gerar dois
outros vetores B e C da seguinte forma:
 a) o Vetor B deve conter todos os elementos pares de A.
 b) o Vetor C deve conter todos os elementos ímpares de A.
 obs.: não se esqueça que o usuário pode ter digitado somente números pares ou somente ímpares. Caso
aconteça, o algoritmo deve emitir uma mensagem avisando que NÃO houve ocorrência.
 No final, limpar a tela e mostrar todos os vetores (A, B e C) caso tenha conteúdo.


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

#define tam 20

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

    int a[tam], b[tam], c[tam], i;

    //INICIALIZAR VARIAVEIS
    i = 0;

    srand(time(NULL));

    for (i = 0; i<tam; i++)
    {
        a[i] = 0;
        b[i] = 1;
        c[i] = 0;
    }

    for (i = 0; i<tam; i++)
    {
        a[i] = rand() % (10);

        if (a[i] % 2 == 0)
            b[i] = a[i];

        if (a[i] % 2 == 1)
            c[i] = a[i];
    }

    for (i = 0; i<tam; i++)
    {
        printf ("\n Vetor A[%d] = %d", i, a[i]);
    }

    printf ("\n\n");

    for (i = 0; i<tam; i++)
    {
        if (b[i] != 1)
            printf ("\n Vetor B[%d] = %d", i, b[i]);
    }

    printf ("\n\n");

    for (i = 0; i<tam; i++)
    {
        if (c[i] != 0)
            printf ("\n Vetor C[%d] = %d", i, c[i]);
    }

    //FINALIZAR PROGRAMA

    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
