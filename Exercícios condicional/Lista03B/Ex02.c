/*===============================================================

    Lista03B_ex02 - Efetuar a leitura de 3 valores num�ricos positivos e mostr�-los em ordem decrescente (do maior
para o menor). A cada entrada verificar se o n�mero � menor que zero, caso verdadeiro mostrar mensagens
de n�mero invalido e finalizar o algoritmo, ou seja, s� receber o pr�ximo n�mero se o atual for maior que
zero.

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

    float nr1, nr2, nr3;

    //INICIALIZAR VARIAVEIS

    printf ("\n Informe o primeiro numero positivo: ");
    fflush (stdin);
    scanf ("%f", &nr1);

    if (nr1 <= 0)
    {
        printf ("\n Invalido.");
    }

    else
    {
        printf ("\n Informe o segundo numero positivo: ");
        fflush (stdin);
        scanf ("%f", &nr2);

        if (nr2 <= 0)
        {
            printf ("\n Invalido.");
        }

        else
        {
            printf ("\n Informe o terceiro numero positivo: ");
            fflush (stdin);
            scanf ("%f", &nr3);

            if (nr3 <= 0)
            {
                printf ("\n Invalido.");
            }

            else
            {
                system ("cls");

                if ((nr1 >= nr2) && (nr2 >= nr3))
                {
                    printf ("\n A ordem decrescente dos numeros eh: %.2f, %.2f, %.2f", nr1, nr2, nr3);
                }

                else
                {
                    if  ((nr1 >= nr3) && (nr3 >= nr2))
                    {
                        printf ("\n A ordem decrescente dos numeros eh: %.2f, %.2f, %.2f", nr1, nr3, nr2);
                    }

                    else
                    {
                        if ((nr3 >= nr2) && (nr2 >= nr1))
                        {
                            printf ("\n A ordem decrescente dos numeros eh: %.2f, %.2f, %.2f", nr3, nr2, nr1);
                        }

                        else
                        {
                            if ((nr3 >= nr1) && (nr1 >= nr2))
                            {
                                printf ("\n A ordem decrescente dos numeros eh: %.2f, %.2f, %.2f", nr3, nr1, nr2);
                            }

                            else
                            {
                                if ((nr2 >= nr1) && (nr1 >= nr3))
                                {
                                    printf ("\n A ordem decrescente dos numeros eh: %.2f, %.2f, %.2f", nr2, nr1, nr3);
                                }

                                else
                                {
                                    if ((nr2 >= nr3) && (nr3 >= nr1))
                                    {
                                        printf ("\n A ordem decrescente dos numeros eh: %.2f, %.2f, %.2f", nr2, nr3, nr1);
                                    }
                                }


                            }


                        }


                    }


                }


            }


        }


    }

    //FINALIZAR PROGRAMA

    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
