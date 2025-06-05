/*===============================================================

    Lista03B_ex04 - Calcular o valor de uma conta de energia elétrica utilizando o efeito cascata. Para isso, receber o
consumo e verificar:
a) se ele for menor que zero, dar uma mensagem de consumo invalido e finalizar o algoritmo, não
processando nenhuma outra verificação;
b) caso igual a zero, mostrar uma mensagem que o não houve consumo no mês e finalizar o algoritmo; e,
c) caso maior que zero, processar o valor a pagar e mostrar seu resultado, conforme efeito cascata
apresentado abaixo.
Analise o exemplo utilizando efeito cascata conforme:

Intervalo Kw    valor R$
1 a 30 kw       1,30
31 a 70 kw      1,90
71 a 90 kw      2,40
91 a 120 kw     3,10
Acima 120 kw    3,80

Exemplo
Ex.: consumo = 80
valor-conta =
( 30 * 1,30 ) + ( 40 * 1,90 ) + ( 10 * 2,40 )
Obs.: dos 80 Kw, temos:
 30 kw no 1º intervalo, ou seja, 1 a 30 kw;
 40 kw no 2º intervalo, ou seja, 31 a 70 kw;
 Assim sobrou, 80 – (30+40), restam 10 kw
para o 3º intervalo.

Exemplificando o efeito “cascata” temos:
1º intervalo 1 30
2º intervalo 31 70
 3º intervalo 71 90
 4º intervalo 91 120
 5º intevalo 121 ....

    CURSO: ANALISE E DESENVOLVIMENTO DE SISTEMAS - ADS
    1º PERÍODO - DISCIPLINA DE ALGORITMO E LÓGICA DE PROGRAMAÇÃO
    Nome do aluno(a): Felipe Lara Facin
    1 SEMESTRE 2025
    Prof. Ernani Claudio Borges
    data: Março 2025

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

    float cons, cont;

    //INICIALIZAR VARIAVEIS

    cons = 0;
    cont = 0;

    printf ("\n Informe o consumo de energia em Kw: ");
    fflush (stdin);
    scanf ("%f", &cons);

    if (cons < 0)
    {
        printf ("\n Consumo invalido.");
    }

    else if (cons == 0)
    {
        printf ("\n Nao houve consumo de energia no mes.");
    }

    else
    {
        if ((cons > 0) && (cons <= 30))
        {
            system ("cls");

            cont = cons * 1.3;

            printf ("\n Valor a pagar: %.2f", cont);
        }

        if ((cons > 30) && (cons <= 70))
        {
            system ("cls");

            cont = (30 * 1.3) + ((cons - 30) * 1.9);

            printf ("\n Valor a pagar: %.2f", cont);
        }

        if ((cons > 70) && (cons <= 90))
        {
            system ("cls");

            cont = (30 * 1.3) + (40 * 1.9) + ((cons - 70) * 2.4);

            printf ("\n Valor a pagar: %.2f", cont);
        }

        if ((cons > 90) && (cons <= 120))
        {
            system ("cls");
            cont = (30 * 1.3) + (40 * 1.9) + (20 * 2.4) + ((cons - 90) * 3.1);

            printf ("\n Valor a pagar: %.2f", cont);
        }

        if (cons > 120)
        {
            system ("cls");
            cont = (30 * 1.3) + (40 * 1.9) + (20 * 2.4) + (30 * 3.1) + ((cons - 120) * 3.8);

            printf ("\n Valor a pagar: %.2f", cont);
        }
    }



    //FINALIZAR PROGRAMA

    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
