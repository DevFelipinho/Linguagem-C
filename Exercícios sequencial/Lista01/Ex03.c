/*===============================================================

    L01_003.alg - Elabore um algoritmo que receba (leia) três números via teclado e apresente o resultado da soma
das combinações, dois a dois, destes três números.
Por exemplo: se forem lidos A, B e C, mostrar A + B, A + C, B + C.

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

    float nr1, nr2, nr3, som1, som2, som3;

    //INICIALIZAR VARIAVEIS

    nr1 = 0;
    nr2 = 0;
    nr3 = 0;
    som1 = 0;
    som2 = 0;
    som3 = 0;

    printf ("\n Informe o primeiro numero: ");
    fflush (stdin);
    scanf ("%f", &nr1);

    printf ("\n Informe o segundo numero: ");
    fflush (stdin);
    scanf ("%f", &nr2);

    printf ("\n Informe o terceiro numero: ");
    fflush (stdin);
    scanf ("%f", &nr3);

    som1 = nr1 + nr2;
    som2 = nr2 + nr3;
    som3 = nr1 + nr3;

    system ("cls");

    printf ("\n\n A soma do primeiro com o segundo eh: %.2f", som1);

    printf ("\n\n A soma do segundo com o terceiro eh: %.2f", som2);

    printf ("\n\n A soma do primeiro com o terceiro eh: %.2f", som3);


    //FINALIZAR PROGRAMA

    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
