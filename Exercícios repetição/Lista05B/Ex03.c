/*===============================================================

    L05B_ex03 – Uma empresa possui uma listagem com vários números de um senso do município de sua cidade (não
se sabe a quantidade exata de entrevistados). Desta forma, vamos elaborar um algoritmo que receba um
número de cada vez, processar os itens solicitados até chegar no último que será o número ZERO, o
qual irá ENCERRAR a entrada dos dados e não fará parte da contagem. Ao final da entrada e processo,
mostrar os seguintes resultados:
a) quantos positivos
b) quantos negativos;
c) quantos pares;
d) quantos ímpares;
e) qual é o maior número; e,
f) qual o menor número.
Obs.1: para facilitar a verificação e armazenamento do MAIOR e MENOR número, considere que o
primeiro número informado será o maior e menor para que possa ser comparado com os próximos que
serão digitados.


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
