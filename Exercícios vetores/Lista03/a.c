/*===============================================================

    Lista03_vetor_ex01 – Elabore um algoritmo que receba via teclado um vetor com dez números inteiro chamado
    de V1 e um segundo vetor com cinco números inteiros chamado V2. Limpe a tela, processe / calcule e
    mostre todos os vetores incluindo os dois vetores resultantes.
     O primeiro resultante chamado de R1 será composto pelo número par do primeiro vetor somado aos
    números do segundo vetor.
     O segundo resultante (R2) será composto pela quantidade de divisores de cada número impar do
    primeiro vetor pelo segundo vetor.
    Criar pelo menos 2 funções.


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

//===============================================================
//============== LOCAL PARA DECLARAR OS PROTOTIPOS ==============
//===============================================================
void entrada (int *v);






//===============================================================
//============== LOCAL PARA CRIAR OS MÓDULOS DE FUNÇÕES =========
//===============================================================
void entrada (int *v)
{
    fflush (stdin);
    scanf ("%d", &*v);
}
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

    int v1[10], v2[5], i, r1[10], r2[10], pares, impares, divisores, j;

    //INICIALIZAR VARIAVEIS

    pares = 0;
    impares = 0;
    divisores = 0;

    for(i = 0; i<10; i++)
    {
        v1[i] = 0;
        r2[i] = 0;
        r1[i] = 0;
    }

    for(i = 0; i<5; i++)
    {
        v2[i] = 0;
    }

    for(i=0;i<10;i++)
    {
        printf("\n Vetor 1 [%d] = ", i+1);
        entrada(&v1[i]);
    }

    for(i=0;i<5;i++)
    {
        printf("\n Vetor 2 [%d] = ", i+1);
        entrada(&v2[i]);
    }

    system ("cls");

    for(i=0;i<10;i++)
    {
        if (v1[i] % 2 == 0)
        {
            r1[pares] = v1[i] + v2[0] + v2[1] + v2[2] + v2[3] + v2[4];
            pares++;
        }

    }

    for(i=0;i<10;i++)
    {
        if (v1[i] % 2 == 1)
        {
            for(j = 0; j<5; j++)
            {
                if (v1[i] % v2[j] == 0)
                {
                    divisores++;
                }
            }
            r2[impares] = divisores;
            impares++;
            divisores = 0;
        }

    }

    for(i=0;i<10;i++)
    {
        printf("\n Vetor 1 [%d] = %d", i+1, v1[i]);
    }

    for(i=0;i<5;i++)
    {
        printf("\n Vetor 2 [%d] = %d", i+1, v2[i]);
    }

    for(i=0;i<pares;i++)
    {
        printf("\n Resultante 1 [%d] = %d", i+1, r1[i]);
    }

    for(i=0;i<impares;i++)
    {
        printf("\n Resultante 2 [%d] = %d", i+1, r2[i]);
    }


    //FINALIZAR PROGRAMA

    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
