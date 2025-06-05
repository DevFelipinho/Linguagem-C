/*===============================================================

    Lista03A_EX002 - Receber 2 valores, verificar se formam os lados de um ret�ngulo, caso
verdadeiro calcular a �rea e mostrar no v�deo, sen�o, mostrar uma mensagem �Estes valores
n�o formam os lados de um ret�ngulo�.
 OBS.: Verificar para n�o ter valores de entrada menor ou igual a zero durante cada entrada,
s� receber o pr�ximo valor caso o primeiro seja v�lido.


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

    float lad1, lad2, area;

    //INICIALIZAR VARIAVEIS

    lad1 = 0;
    lad2 = 0;
    area = 0;


    printf ("\n Informe o primeiro lado de um retangulo (maior que zero): ");
    fflush (stdin);
    scanf ("%f", &lad1);

    if (lad1 <= 0.0)
    {
        printf ("\n Invalido.");
    }


    else
    {
        printf ("\n Informe o segundo lado de um retangulo (maior que zero): ");
        fflush (stdin);
        scanf ("%f", &lad2);

        if (lad2 <= 0.0)
        {
             printf ("\n Invalido.");
        }

        else
        {
            if (lad1 == lad2)
            {

                system ("cls");
                printf ("\n Estes valores nao formam os lados de um retangulo.");
            }

            else
                {
                    area = lad1 * lad2;

                    system ("cls");

                    printf ("\n A area do retangulo eh : %.2f", area);
                }
        }

    }

    //FINALIZAR PROGRAMA

    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
