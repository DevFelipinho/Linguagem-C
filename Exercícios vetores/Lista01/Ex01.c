/*===============================================================

    Lista01_vetor_ex01 � Elabore um algoritmo que receba via teclado um vetor num�rico de 10 posi��es, limpar a
tela, dar uma mensagem e mostr�-los no v�deo.

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

#define tam 10

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

    int v[tam], i;

    //INICIALIZAR VARIAVEIS

    for (i=0;i<tam; i++)
        v[i] = 0;

    for (i=0; i<tam; i++)
    {
        printf ("\n Digite o numero para a posicao do vetor[%d]: ", i);
        fflush (stdin);
        scanf ("%d", &v[i]);
    }

    system ("cls");

    printf ("\n               Relatorio do vetores\n\n");

    for (i=0; i<tam; i++)
    {
        printf ("\n Vetor[%d] = %d", i, v[i]);
        Sleep(150);
    }



    //FINALIZAR PROGRAMA

    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
