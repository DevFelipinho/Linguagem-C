/*===============================================================

    Lista02_Ex04.alg � Elaborar um algoritmo que receba um n�mero inteiro via teclado, verificar
se � menor que zero, dar uma mensagem e finalizar o programa, caso contr�rio,
processar e mostrar o valor do resto (MOD) deste n�mero por 2 e por 3.

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

    int nr, res2, res3;

    //INICIALIZAR VARIAVEIS

    nr = 0;
    res2 = 0;
    res3 = 0;

    printf ("\n Informe um numero maior ou igual a zero: ");
    fflush (stdin);
    scanf ("%d", &nr);

    if (nr >= 0)
    {
        res2 = nr % 2;
        res3 = nr % 3;

        system ("cls");

        printf ("\n O resto desse numero dividido por 2 eh: %d", res2);
        printf ("\n\n O resto desse numero dividido por 3 eh: %d", res3);
    }

    else
    {
        printf ("\n Invalido, o numero eh menor que zero.");
    }


    //FINALIZAR PROGRAMA

    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
