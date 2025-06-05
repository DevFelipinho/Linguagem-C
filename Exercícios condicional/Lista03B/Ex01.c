/*===============================================================

    Lista03B_ex01 - Ler dois valores numéricos e processar e apresentar:
a) O valor da diferença do maior pelo menor.
b) caso sejam iguais, uma mensagem que a diferença é zero;

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

    float nr1, nr2, dif;

    //INICIALIZAR VARIAVEIS

    nr1 = 0;
    nr2 = 0;
    dif = 0;

    printf ("\n Informe o primeiro numero: ");
    fflush (stdin);
    scanf ("%f", &nr1);

    printf ("\n Informe o segundo numero: ");
    fflush (stdin);
    scanf ("%f", &nr2);

    if (nr1 > nr2)
    {
        dif = nr1 - nr2;

        system ("cls");

        printf ("\n A diferenca dos numeros eh: %.2f", dif);
    }

    else if (nr2 > nr1)
    {
        dif = nr2 - nr1;

        system ("cls");

        printf ("\n A diferenca dos numeros eh: %.2f", dif);
    }

    else
    {

        system ("cls");
        printf ("\n A diferenca dos numeros eh zero.");
    }

    //FINALIZAR PROGRAMA

    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
