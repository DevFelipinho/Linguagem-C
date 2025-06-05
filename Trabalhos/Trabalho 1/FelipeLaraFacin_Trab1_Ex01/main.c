/*===============================================================

    1) Elabore um algoritmo que solicite ao operador que informe uma série de números cujo elemento finalizador é o zero,
    processe e apresente como saída o valor do cálculo obtido a partir da seguinte fórmula aplicada a cada elemento da
    lista em relação à sua posição (o elemento (número informado) multiplicado pela sua posição na lista e o resultado
    elevado à posição do elemento (número informado) na lista):
    CÁLCULO = ((ELEMENTO DA LISTA) * (POSIÇÃO NA LISTA)) ^ (POSIÇÃO NA LISTA) .
    No final apresente a soma de todos os cálculos realizados, a média aritmética e quantos cálculos foram realizados.

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
    //CRIAR VARIAVEI

    float num, posi, calcu, med, soma, poten;

    //INICIALIZAR VARIAVEIS

    num = 0;
    posi = 0;
    calcu = 0;
    med = 0;
    soma = 0;
    poten = 0;

    printf ("\n Informe uma serie de numeros cujo elemento finalizador eh o zero: \n");

    do
    {
        printf ("\n ");
        fflush (stdin);
        scanf ("%f", &num);

        if (num != 0)
        {
            posi++;

            calcu = num * posi;
            poten = pow (calcu, posi);

            printf ("\n Calculo = (%.2f * %.2f) ^ %.2f = %.2f\n", num, posi, posi, poten);

            soma+=poten;
            med = soma/posi;
        }

    }while (num != 0);

    system ("cls");

    if (posi == 0)
    {
        printf ("\n Nao teve soma dos calculos");
        printf ("\n\n Nao teve media aritmetica");
        printf ("\n\n Nao foram realizados calculos");
    }

    else if(posi == 1)
    {
        printf ("\n A soma de todos os calculos realizados eh: %.2f", soma);
        printf ("\n\n A media aritmetica de todos os calculos realizados eh: %.2f", med);
        printf ("\n\n Foi realizado %.0f calculo", posi);
    }

    else
    {
        printf ("\n A soma de todos os calculos realizados eh: %.2f", soma);
        printf ("\n\n A media aritmetica de todos os calculos realizados eh: %.2f", med);
        printf ("\n\n Foram realizados %.0f calculos", posi);
    }



    //FINALIZAR PROGRAMA

    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
