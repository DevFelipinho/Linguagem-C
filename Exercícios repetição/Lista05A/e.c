/*===============================================================

    e) 1 , 3 , 5 , 7 , 9 , 11 , 13 , 15 , 17 , 19 , 21 , ... , N


    CURSO: ANALISE E DESENVOLVIMENTO DE SISTEMAS - ADS
    1º PERÍODO - DISCIPLINA DE ALGORITMO E LÓGICA DE PROGRAMAÇÃO
    Nome do aluno(a): Felipe Lara Facin
    1 SEMESTRE 2025
    Prof. Ernani Claudio Borges
    data: Março 2025

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

    int cont, lim;

    //INICIALIZAR VARIAVEIS

    cont = 1;
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

    lim-=1;

    while (cont < lim)
    {
        printf (" %d,", cont);
        cont+=2;
        Sleep (150);

    }


    if (cont == lim)
    {
        printf (" %d", cont);
    }
    else
    {
        printf (" %d", cont);
    }

    //FINALIZAR PROGRAMA

    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
