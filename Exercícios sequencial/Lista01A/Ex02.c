/*===============================================================

    2) Elaborar um algoritmo que receba tr�s notas e seus respectivos pesos, calcule e mostre o valor da m�dia
ponderada dessas notas.
Obs.: sabe-se que a f�rmula para c�lculo de m�dia ponderada �:
o somat�rio da multiplica��o de cada nota por seu peso, divido pela soma dos pesos.

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

    float not1, not2, not3, pes1, pes2, pes3, med;

    //INICIALIZAR VARIAVEIS

    not1 = 0;
    not2 = 0;
    not3 = 0;
    pes1 = 0;
    pes2 = 0;
    pes3 = 0;
    med = 0;

    printf ("\n Informe a primeira nota: ");
    fflush (stdin);
    scanf ("%f", &not1);

    printf ("\n Informe o peso da primeira nota: ");
    fflush (stdin);
    scanf ("%f", &pes1);

    printf ("\n Informe a segunda nota: ");
    fflush (stdin);
    scanf ("%f", &not2);

    printf ("\n Informe o peso da segunda nota: ");
    fflush (stdin);
    scanf ("%f", &pes2);

    printf ("\n Informe a terceira nota: ");
    fflush (stdin);
    scanf ("%f", &not3);

    printf ("\n Informe o peso da terceira nota: ");
    fflush (stdin);
    scanf ("%f", &pes3);

    med = ((not1 * pes1) + (not2 * pes2) + (not3 * pes3)) / (pes1 + pes2 + pes3);

    system ("cls");

    printf ("\n A media ponderada das notas eh: %.2f", med);


    //FINALIZAR PROGRAMA

    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
