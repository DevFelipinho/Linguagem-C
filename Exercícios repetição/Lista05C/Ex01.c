/*===============================================================

    L05C_ex01 – Elabore um algoritmo que processe e apresente o valor de S correspondente a série abaixo:
S = 1 + 3 + 5 + 7 + 9 + 11 + ... + ...
    1   2   3   4   5   6           n

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

    float soma, num, den, cont, div;
    int quant;

    //INICIALIZAR VARIAVEIS

    soma = cont = quant = div = 0;
    den = 1;
    num = 1;

    printf ("\n Informe a quantidade de termos: ");

    do
    {
        fflush (stdin);
        scanf ("%d", &quant);

        if (quant <= 0)
        {
            printf ("\n A quantidade precisa ser maior que zero, digite novamente a quantidade de termos: ");
        }
    }while (quant <= 0);

    do
    {
        div = num/den;
        soma+=div;

        num+=2;
        den++;
        cont++;

    }while (cont<quant);

    printf ("\n A somatoria eh: %.2f", soma);

    //FINALIZAR PROGRAMA

    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
