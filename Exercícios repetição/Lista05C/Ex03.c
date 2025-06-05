/*===============================================================

    L05C_ex03 – Elabore um algoritmo que processe e apresente o valor do somatório S da série abaixo
    correspondentes aos “n” termos desta sequência, ou seja, receber via teclado a quantidade de
    termos que o cliente (usuário) deseja calcular (validar corretivamente a entrada de dados para se
    maior que zero).
    S = 1000 - 997 + 994 - 991 + 988 - 985 + ...
          5    10    15    20    25    30


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

    int quant;
    float div, som, den, num, sinal, contSinal, cont;

    //INICIALIZAR VARIAVEIS

    quant = div = som = cont = contSinal = 0;
    den = 5;
    num = 1000;
    sinal = 1;

    printf ("\n Informe a quantidade de termos da somatoria (inteiro e positivo): ");

    do
    {
        fflush (stdin);
        scanf ("%d", &quant);

        if (quant<= 0 )
        {
            printf ("\n Quantidade invalida, digite novamente:");
        }

    }while (quant<= 0);

    do
    {
        if (contSinal==1)
        {
            sinal*=-1;
            contSinal = 0;
        }

        div = num/den;
        div*=sinal;
        som+=div;

        contSinal++;
        cont++;
        num-=3;
        den+=5;

    }while (cont<quant);

    printf ("\n A somatoria eh: %.2f", som);

    //FINALIZAR PROGRAMA

    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
