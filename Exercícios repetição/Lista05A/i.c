/*===============================================================

    i) 2 , 4 , 8 , 16 , 32 , 64 , 128 , ... , N


    CURSO: ANALISE E DESENVOLVIMENTO DE SISTEMAS - ADS
    1� PER�ODO - DISCIPLINA DE ALGORITMO E L�GICA DE PROGRAMA��O
    Nome do aluno(a): Felipe Lara Facin
    1 SEMESTRE 2025
    Prof. Ernani Claudio Borges
    data: Mar�o 2025

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

    int cont, lim;

    //INICIALIZAR VARIAVEIS

    cont = 2;
    lim = 0;

    printf ("Informe um numero inteiro maior ou igual a zero: ");
    fflush (stdin);
    scanf ("%d", &lim);
    printf ("\n");


    while (lim < 0)
    {
        printf ("\n O numero informado eh negativo, informe um numero inteiro maior ou igual a zero: ");
        fflush (stdin);
        scanf ("%d", &lim);
        printf ("\n");
    }

    printf (" %d", cont);
    cont*=2;

    while (cont <= lim)
    {
        printf (", %d", cont);
        cont*=2;
        Sleep (150);

    }

    //FINALIZAR PROGRAMA

    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
