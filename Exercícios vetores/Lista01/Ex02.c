/*===============================================================

    Lista01_vetor_ex02 � Elabore um algoritmo que receba via teclado um vetor num�rico de 50 posi��es, logo ap�s,
limpar a tela, dar uma mensagem "CONTEUDO DO VETOR"; e mostrar todos os seus elementos; e,
logo em seguida mostras quais os n�meros pares (se houver) e quais os n�meros �mpares (se
houver).


    CURSO: ANALISE E DESENVOLVIMENTO DE SISTEMAS - ADS
    1� PER�ODO - DISCIPLINA DE ALGORITMO E L�GICA DE PROGRAMA��O
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






//===============================================================
//============== LOCAL PARA CRIAR OS M�DULOS DE FUN��ES =========
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

    int v[50], i;

    //INICIALIZAR VARIAVEIS

    for (i=0; i<50; i++)
        v[i]= i;

    printf ("\n           CONTEUDO DO VETOR\n");

    for (i=0; i<50; i++)
    printf ("\n Vetor[%d] = %d", i, v[i]);

    printf("\n");

    for (i=0; i<50; i++)
        {
            if (v[i]%2 ==0)
            {
                printf ("\n Vetor[%d] = %d", i, v[i]);

            }
        }

    printf("\n");

    for (i=0; i<50; i++)
        {
            if (v[i]%2 ==1)
            {
                printf ("\n Vetor[%d] = %d", i, v[i]);

            }
        }


    //FINALIZAR PROGRAMA

    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
