/*===============================================================

    L05B_ex03 � Uma empresa possui uma listagem com v�rios n�meros de um senso do munic�pio de sua cidade (n�o
se sabe a quantidade exata de entrevistados). Desta forma, vamos elaborar um algoritmo que receba um
n�mero de cada vez, processar os itens solicitados at� chegar no �ltimo que ser� o n�mero ZERO, o
qual ir� ENCERRAR a entrada dos dados e n�o far� parte da contagem. Ao final da entrada e processo,
mostrar os seguintes resultados:
a) quantos positivos
b) quantos negativos;
c) quantos pares;
d) quantos �mpares;
e) qual � o maior n�mero; e,
f) qual o menor n�mero.
Obs.1: para facilitar a verifica��o e armazenamento do MAIOR e MENOR n�mero, considere que o
primeiro n�mero informado ser� o maior e menor para que possa ser comparado com os pr�ximos que
ser�o digitados.


    CURSO: ANALISE E DESENVOLVIMENTO DE SISTEMAS - ADS
    1� PER�ODO - DISCIPLINA DE ALGORITMO E L�GICA DE PROGRAMA��O
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

    int quantP, quantN, quantPar, quantImpar, maior, menor, nm, quant;

    //INICIALIZAR VARIAVEIS

    quantP = 0;
    quantN = 0;
    quantPar = 0;
    quantImpar = 0;
    maior = 0;
    menor = 0;
    nm = 1;
    quant = 0;

    while (nm != 0)
    {
        printf ("\n Informe um numero (digite zero para nao adicionar mais numeros): ");
        fflush (stdin);
        scanf ("%d", &nm);

        if (nm != 0)
        {
            quant++;


            if (nm % 2 == 0)
            {
                quantPar++;
            }

            if (nm % 2 == 1)
            {
                quantImpar++;
            }

            if (nm > 0)
            {
                quantP++;
            }

            if (nm < 0)
            {
                quantN++;
            }

            if (quant == 1)
            {
                maior = menor = nm;
            }

            if (nm > maior)
            {
                maior = nm;
            }

            if (nm < menor)
            {
                menor = nm;
            }

        }
    }

    system ("cls");

    printf ("\n A quantidade de numeros positivos eh: %2d", quantP);
    printf ("\n\n A quantidade de numeros negativos eh: %2d", quantN);
    printf ("\n\n A quantidade de numeros pares eh....: %2d", quantPar);
    printf ("\n\n A quantidade de numeros impares eh..: %2d", quantImpar);
    printf ("\n\n O maior numero eh...................: %2d", maior);
    printf ("\n\n O menor numero eh...................: %2d", menor);


    //FINALIZAR PROGRAMA

    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
