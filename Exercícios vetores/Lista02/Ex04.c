/*===============================================================

    Lista02_vetor_ex04 – Elabore um algoritmo que receba dois vetores A e B de 15 posições para números inteiros.
Criar um terceiro vetor C o qual será composto pela UNIÃO destes dois vetores, ou seja, todo o conteúdo
de A e de B estão em C.
 No final, limpar a tela e mostrar todos os vetores (A, B e C)

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

#define tam 15

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

    int a[tam], b[tam], i, c[tam*2];

    //INICIALIZAR VARIAVEIS

     for(i = 0; i<tam; i++)
     {
         a[i] = 0;
         b[i] = 0;
         c[i] = 0;

     }

     for(i = 0; i<tam; i++)
     {
         a[i] = rand() % (10);
         b[i] = rand() % (10);
         c[i] = a[i];
         c[i+15] = b[i];
     }

     for(i = 0; i<tam; i++)
    {
        printf ("\n Vetor a[%d] = %d", i , a[i]);
        printf ("\n Vetor b[%d] = %d", i , b[i]);
    }

    for(i = 0; i<tam+15; i++)
        printf ("\n Vetor c[%d] = %d", i , c[i]);


    //FINALIZAR PROGRAMA

    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
