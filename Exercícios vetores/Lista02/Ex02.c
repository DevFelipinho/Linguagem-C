/*===============================================================

    Lista02_vetor_ex02 – Elabore um algoritmo que receba via teclado um vetor números inteiros. Processar e
mostrar qual é o maior e menor número do vetor e em qual posição ele aparece.
 Obs.: desprezar número maiores iguais, mostrar somente a posição primeiro número maior e menor
encontrado.

    CURSO: ANALISE E DESENVOLVIMENTO DE SISTEMAS - ADS
    1º PERÍODO - DISCIPLINA DE ALGORITMO E LÓGICA DE PROGRAMAÇÃO
    Nome do aluno(a): Felipe Lara Facin
    1 SEMESTRE 2025
    Prof. Ernani Claudio Borges
    data: Maio 2025

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
#include <conio.h>

#define tam 10
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

    int a[tam], i, maio, meno, pma, pme;

    maio = 0;
    meno = 0;
    pma = 0;
    pme = 0;

    srand(time(NULL));



    for(i = 0;i<tam; i++)
    {
        a[i] = 0;
    }

    for(i = 0;i<tam; i++)
    {
        a[i] = rand() % (100);
    }

    for(i = 0;i<tam;i++)
    {
        if(i==0)
        {
            maio = meno = a[i];
        }

        else if (a[i]<meno)
        {
            meno = a[i];
            pme = i;
        }

        else if (a[i]>maio)
        {
            maio = a[i];
            pma = i;
        }
    }

    for(i = 0;i<tam;i++)
    {
        printf ("\n Vetor[%d]= %d", i, a[i]);
    }

    printf ("\n Maior: Vetor[%d]= %d", pma, maio);

    printf ("\n Menor: Vetor[%d]= %d", pme, meno);


    //INICIALIZAR VARIAVEIS

    //FINALIZAR PROGRAMA

    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
