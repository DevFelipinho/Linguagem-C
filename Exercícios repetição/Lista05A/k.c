/*===============================================================

    k) 1 , 2 , 3 , 4 , 8 , 9 , 10 , 11 , 22 , 23 , 24 , 25 , ... , N

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

    int cont, lim, aux;

    //INICIALIZAR VARIAVEIS

    cont = 1;
    lim = 0;
    aux = 1;


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
    cont++;
    aux++;

    while (cont < lim)
    {
        if (aux <= 3)
        {

            printf (", %d", cont);
            cont++;
            Sleep (150);
            aux++;
        }

        else
        {
            printf (", %d", cont);
            cont*=2;
            aux = 1;
        }


    }

    //FINALIZAR PROGRAMA

    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
