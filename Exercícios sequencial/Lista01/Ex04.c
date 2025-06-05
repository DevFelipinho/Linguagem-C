/*===============================================================

    L01_004.alg - Elabore um algoritmo que leia (receba) dois valores correspondentes à largura (lado1) e ao
comprimento (lado2) de um quadrado (desprezar valores diferentes). Calcule e mostre no vídeo a área
deste quadrado sabendo-se que a fórmula é:
AREA = LARGURA x COMPRIMENTO, ou seja, lado1 x lado2.

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

    float lad, alt, are;

    //INICIALIZAR VARIAVEIS

    lad = 0;
    alt = 0;
    are = 0;


    printf ("\n Informe o lado do quadrado: ");
    fflush (stdin);
    scanf ("%f", &lad);

    printf ("\n Informe a altura do quadrado: ");
    fflush (stdin);
    scanf ("%f", &alt);

    while (lad != alt)
    {
        printf ("\n\n Informe a altura igual ao lado, eh um quadrado: ");
        fflush (stdin);
        scanf ("%f", &alt);
    }

    are = lad * alt;

    system ("cls");


    printf ("\n\n A area do quadrado eh: %.2f", are);

    //FINALIZAR PROGRAMA

    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
