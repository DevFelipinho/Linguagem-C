/*===============================================================

    L05B_ex06 – Elaborar um algoritmo que receba uma série de números inteiros (positivos e ou negativos) cujo
elemento finalizador é o 0 (zero servirá apenas “parar” a entrada dos números e não participará do
processo), Apresente no final as seguintes informações:
a) quantos números foram fornecidos;
b) qual é a soma dos números fornecidos;
c) qual é a média aritmética entre os números;
d) qual foi o menor número fornecido;
e) qual foi o maior número fornecido

    CURSO: ANALISE E DESENVOLVIMENTO DE SISTEMAS - ADS
    1º PERÍODO - DISCIPLINA DE ALGORITMO E LÓGICA DE PROGRAMAÇÃO
    Nome do aluno(a): Felipe Lara Facin
    1 SEMESTRE 2025
    Prof. Ernani Claudio Borges
    data: Abril 2025

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

    float quant, som, med, meno, maio, nm;

    //INICIALIZAR VARIAVEIS

    quant = som = med = maio = meno = 0;
    nm = 1;

    printf ("\n Informe um numero positivo ou negativo (escreva zero para nao fornecer mais numeros): \n");

    while (nm != 0)
    {
        printf ("\n ");
        fflush (stdin);
        scanf ("%f", &nm);

        if (nm != 0)
        {
            quant++;
            som+=nm;

            if (quant == 1)
            {
                maio = nm;
                meno = nm;
            }

            else
            {
                if (nm >= maio)
                {
                    maio = nm;
                }

                if (nm <= meno)
                {
                    meno = nm;
                }
            }


        }
    }

    med = som / quant;

    system ("cls");

    if (quant == 0)
    {
        printf ("\n A quantidade de numeros fornecidos eh: 0");
        printf ("\n\n A soma dos numeros fornecidos eh.....: 0");
        printf ("\n\n A media dos numeros fornecidos eh....: 0");
        printf ("\n\n O menor numero fornecido eh..........: nenhum");
        printf ("\n\n O maior numero fornecido eh..........: nenhum");
    }

    else
    {
        printf ("\n A quantidade de numeros fornecidos eh: %2.2f", quant);
        printf ("\n\n A soma dos numeros fornecidos eh.....: %2.2f", som);
        printf ("\n\n A media dos numeros fornecidos eh....: %2.2f", med);
        printf ("\n\n O menor numero fornecido eh..........: %2.2f", meno);
        printf ("\n\n O maior numero fornecido eh..........: %2.2f", maio);
    }





    //FINALIZAR PROGRAMA

    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
