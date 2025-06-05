/*===============================================================

    p) 1 , 7 , 3 , 14 , 9 , 21 , 27 , 28 ,81 , 35 , ... , N

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

    int cont, lim, cont2;

    //INICIALIZAR VARIAVEIS

    cont = 1;
    lim = 0;
    cont2 = 7;

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
    if (lim >= 1)
    {
        printf (" %d", cont);
        cont*=3;
    }

    if (lim >= 7)
    {
        printf (", %d", cont2);
        cont2+=7;
        printf (", %d", cont);
        cont*=3;
    }


    while (cont <= lim && cont2 <= lim)
    {

        printf (", %d", cont2);
        cont2+=7;
        Sleep (150);
        printf (", %d", cont);
        cont*=3;
        Sleep (150);

    }

    if (cont2 <= lim)
    {
        printf (", %d", cont2);
        cont2+=7;
        Sleep (150);
    }


    //FINALIZAR PROGRAMA

    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
