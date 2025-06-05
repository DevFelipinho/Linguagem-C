/*===============================================================

    s) 2 , 8 , 4 , 16 , 8 , 32 , 16 , 64 ,32 , ... , N

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

    int lim, cont, cont2;

    //INICIALIZAR VARIAVEIS

    cont = 2;
    cont2 = 8;
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

    if (lim >= 2)
    {
        printf (" %d", cont);
        Sleep (150);
        cont*=2;

    }

    if (lim >= 8)
    {
        printf (", %d", cont2);
        Sleep (150);
        cont2*=2;
    }


    while (cont2 <= lim )
    {
        printf (", %d", cont);
        cont*=2;
        Sleep (150);
        printf (", %d", cont2);
        cont2*=2;
        Sleep (150);
    }

    if (cont <= lim && lim >= 8)
    {
        printf (", %d", cont);
        Sleep (150);
    }

    //FINALIZAR PROGRAMA

    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
