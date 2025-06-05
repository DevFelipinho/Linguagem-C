/*===============================================================

    Lista03A_EX001 - Receber 2 valores inteiros (VLA e VLB), efetuar a soma e armazenar na variável
VLX. Verificar o valor de VLX, caso o seu conteúdo seja maior que 10 mostrar uma
mensagem que o resultado é maior que 10, senão se ele for menor que 10 ou senão uma
mensagem que é igual a 10.


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
