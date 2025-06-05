/*===============================================================

    L05C _ex06 – Receber dois números inteiros e positivos via teclado (validar corretivamente durante
    a entrada). Processar e mostrar a exponenciação do primeiro número elevado
    começando em zero, variando de 1 em 1 até chegar no segundo número. Deve ser
    considerado que qualquer número elevado a zero é 1. Mostrar na tela conforme exemplo abaixo,
    caso o primeiro número seja 3 e o segundo seja 15,
    3
    0 = 1
    3
    1
     = 3
    3
    2
     = 9
    3
    3
     = 27
    ......
    3
    15 = 14348907
    Obs.: proibido usar funções prontas tais como: exp, ^, POW,
    ... ou qualquer outra.
     Você deverá criar uma lógica (laço) para efetuar os
    cálculos.
    Ao final, Perguntar ao usuário se deseja executar novamente com outros números. Validar corretivamente a
    resposta para ser << s >> para sim e << n >> para não.

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

    int base, expoLi, cont, resul, expo;
    char esco;

    //INICIALIZAR VARIAVEIS

    cont = expoLi = base = resul = 0;
    expo = 1;
    esco = ' ';

    do
    {

        printf ("\n Informe a base da exponenciacao(inteiro e positivo): ");

        do
        {
            fflush (stdin);
            scanf ("%d", &base);

            if (base<= 0)
            {
                printf ("\n Numero invalido, digite novamente: ");
            }
        }while (base<=0);

        printf ("\n Informe o expoente limite(inteiro e positivo): ");

        do
        {
            fflush (stdin);
            scanf ("%d", &expoLi);

            if (expoLi<= 0)
            {
                printf ("\n Numero invalido, digite novamente: ");
            }
        }while (expoLi<=0);

        do
        {
            if (cont == 0)
            {
                resul = base * expo;
                printf ("\n %d ^ %d = 1", base, cont);
                cont++;
                expo = resul;
            }

            else
            {
                printf ("\n %d ^ %d = %d", base, cont, resul);
                resul = base * expo;
                cont++;
                expo = resul;
            }

        }while (cont<=expoLi);

        printf ("\n\n Deseja executar novamente com outros numeros(<<s>> para sim e <<n>> para nao)? ");

        do
        {
            fflush (stdin);
            scanf ("%c", &esco);

            if (esco != 's' && esco != 'S' && esco != 'N' && esco != 'n')
            {
                printf  ("\n Escolha invalida, digite novamente: ");
            }

        }while (esco != 's' && esco != 'S' && esco != 'N' && esco != 'n');

        cont = expoLi = base = resul = 0;
        expo = 1;

        system ("cls");

    }while (esco!= 'n' && esco!='N');

    //FINALIZAR PROGRAMA

    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
