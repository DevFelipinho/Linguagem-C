/*===============================================================

    Lista02_Ex03.alg � Elaborar um algoritmo que recebe tr�s notas de um aluno, uma de cada
vez e verificando se � menor que zero ou maior que dez, caso seja, mostrar mensagem
nota inv�lida e finalizar o algoritmo. Fazer isso para cada nota durante a entrada.
Caso contr�rio, ou seja, as notas estejam entre zero e dez, receber a outra nota e assim
por diante. No final das tr�s entradas, caso todas as notas seja v�lidas, calcular a m�dia
aritm�tica e mostrar o resultado no v�deo.

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

    float not1, not2, not3, med;

    //INICIALIZAR VARIAVEIS

    not1 = 0;
    not2 = 0;
    not3 = 0;
    med = 0;

    printf ("\n Informe a primeira nota: ");
    fflush (stdin);
    scanf ("%f", &not1);

    if ((not1 > 0) && (not1 < 10))
    {
        printf ("\n Informe a segunda nota: ");
        fflush (stdin);
        scanf ("%f", &not2);

        if ((not2 > 0) && (not2 < 10))
        {
            printf ("\n Informe a terceira nota: ");
            fflush (stdin);
            scanf ("%f", &not3);


            if ((not3 > 0) && (not3 < 10))
            {
                med = (not1 + not2 + not3) /3.0;

                system ("cls");

                printf ("\n A media das notas eh: %.2f", med);
            }

            else
            {
                printf ("\n Nota invalida.");
            }
        }

        else
        {
            printf ("\n Nota invalida.");
        }
    }

    else
    {
        printf ("\n Nota invalida.");
    }


    //FINALIZAR PROGRAMA

    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
