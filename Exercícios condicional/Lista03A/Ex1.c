/*===============================================================

    Lista03A_EX001 - Receber 2 valores inteiros (VLA e VLB), efetuar a soma e armazenar na vari�vel
VLX. Verificar o valor de VLX, caso o seu conte�do seja maior que 10 mostrar uma
mensagem que o resultado � maior que 10, sen�o se ele for menor que 10 ou sen�o uma
mensagem que � igual a 10.


    CURSO: ANALISE E DESENVOLVIMENTO DE SISTEMAS - ADS
    1� PER�ODO - DISCIPLINA DE ALGORITMO E L�GICA DE PROGRAMA��O
    Nome do aluno(a): Felipe Lara Facin
    1 SEMESTRE 2025
    Prof. Ernani Claudio Borges
    data: Mar�o 2025

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

    int vla, vlb, vlx;

    //INICIALIZAR VARIAVEIS

    vla = 0;
    vlb = 0;
    vlx = 0;

    printf ("\n Informe o primeiro numero inteiro: ");
    fflush (stdin);
    scanf ("%d", &vla);

    printf ("\n Informe o segundo numero inteiro: ");
    fflush (stdin);
    scanf ("%d", &vlb);

    vlx = vla + vlb;

    system ("cls");

    if (vlx > 10)
    {
        printf ("\n A soma dos numeros eh maior que 10");
    }

    if (vlx < 10)
    {
        printf ("\n A soma dos numeros eh menor que 10");
    }

    if (vlx == 10)
    {
        printf ("\n A soma dos numeros eh igual a 10");
    }



    //FINALIZAR PROGRAMA

    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
