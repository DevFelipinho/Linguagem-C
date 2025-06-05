/*===============================================================

    Lista03A_EX004 - Receber quatro notas de um aluno (verificar durante a entrada de cada valor,
ou seja, s� receber a pr�xima entrada se a anterior atender os requisitos. sen�o, cancelar o
processamento quando a nota for inferior a 0 ou superior a 10).
 CASO, todas as entradas atendam as especifica��es, calcular a m�dia, verificar e apresentar
uma das mensagens a seguir: �APROVADO� para m�dia superior ou igual a 6,0;
�RECUPERA��O� para m�dia inferior a 6 e maior ou igual a 4 e �REPROVADO� para m�dia
inferior a 4.

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

    float not1, not2, not3, not4, med;

    //INICIALIZAR VARIAVEIS

    not1 = 0;
    not2 = 0;
    not3 = 0;
    not4 = 0;
    med = 0;

    printf ("\n Informe a primeira nota: ");
    fflush (stdin);
    scanf ("%f", &not1);

    if ((not1 < 0) || (not1 > 10))
    {

    printf ("\n Numero invalido");

    }

    else
    {
        printf ("\n Informe a segunda nota: ");
        fflush (stdin);
        scanf ("%f", &not2);

        if ((not2 < 0) || (not2 > 10))
        {
            printf ("\n Numero invalido");
        }

        else
        {
            printf ("\n Informe a terceira nota: ");
            fflush (stdin);
            scanf ("%f", &not3);

            if ((not3 < 0) || (not3 > 10))
            {
                printf ("\n Numero invalido");
            }

            else
            {
                printf ("\n Informe a quarta nota: ");
                fflush (stdin);
                scanf ("%f", &not4);

                if ((not4 < 0) || (not4 > 10))
                {
                    printf ("\n Numero invalido");
                }
                else
                {
                    med = (not1 + not2 + not3 + not4) / 4.0;

                    if (med >= 6)
                    {
                        system ("cls");
                        printf ("\n APROVADO");
                    }

                    if ((med < 6) && (med >= 4))
                    {
                        system ("cls");
                        printf ("\n RECUPERACAO");
                    }

                    if (med < 4)
                    {
                        system ("cls");
                        printf ("\n REPROVADO");
                    }
                }

            }

        }
    }

    //FINALIZAR PROGRAMA

    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
