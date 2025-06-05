/*===============================================================

    L05C_ex04 – Elaborar um algoritmo que receba um número positivo (validar corretivamente durante a entrada),
    processar e mostrar todos os números divisíveis por 4 que estejam no intervalo de 1 até esse
    número.
    Fazer de forma que o usuário possa, após mostrar o resultado, perguntar ao usuário se
    deseja executar novamente com outro número. Validar corretivamente a resposta para
    ser << s >> para sim e << n >> para não.


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

    float num;
    int cont, div;
    char esco;

    //INICIALIZAR VARIAVEIS

    num = 0;
    div = 1;
    cont = 0;
    esco = ' ';

    do
    {
        printf ("\n Informe um numero positivo: ");

        do
        {
            fflush (stdin);
            scanf ("%f", &num);

            if (num<=0)
            {
                printf("\n Numero invalido, digite novamente: ");
            }
        }while(num<=0);

        printf ("\n");

        do
        {
            if (div % 4 == 0)
            {
                printf (" %d", div);
                Sleep (150);
            }

            cont++;
            div++;

        }while(cont<num);

        printf ("\n");

        printf ("\n Deseja executar novamente com outro numero (<<s>> para sim e <<n>> para nao)? ");

        do
        {
            fflush (stdin);
            scanf ("%c", &esco);

            if (esco != 'n' && esco != 'N' && esco != 'S' && esco != 's')
            {
                printf ("\n Escolha invalida, digite novamente: ");
            }

        }while (esco != 'n' && esco != 'N' && esco != 'S' && esco != 's');

        system ("cls");

        cont = 0;
        div = 1;
        num = 0;

    }while (esco != 'n' && esco != 'N');




    //FINALIZAR PROGRAMA

    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
