/*===============================================================

    Lista04_vetor_ex03 � Elaborar um algoritmo para receber um grupo de 50 valores reais. Classificar em ordem
    decrescente. Ap�s a classifica��o, mostra-lo na tela, bem como qual o maior e o menor valor e tamb�m
    quantas vezes cada um deles aparece e em quais posi��es.


    CURSO: ANALISE E DESENVOLVIMENTO DE SISTEMAS - ADS
    1� PER�ODO - DISCIPLINA DE ALGORITMO E L�GICA DE PROGRAMA��O
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

#define tam 50

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

    int v[tam], i, j, aux, maior, menor, vpma[tam], vpme[tam];
    aux = 0;
    maior = 0;
    menor = 0;

    //INICIALIZAR VARIAVEIS

    srand(time(NULL));

    for(i =0; i<tam; i++)
    {
        v[i] = 0;
        vpma[i] = 0;
        vpme[i] = 0;
    }

    for(i =0; i<tam; i++)
        v[i] = rand() % (tam);

    for(i =0; i<tam; i++)
    {
        for(j =0; j<tam-1; j++)
        {
            if (v[j] > v[j+1])
            {
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }

    for(i =0; i<tam; i++)
        printf ("\n Vetor[%d] = %d", i, v[i]);


    for(i =0; i<tam; i++)
    {
        if (v[tam-1] == v[i])
        {
            vpma[maior] = i;
            maior++;
        }
    }

    for(i =0; i<tam; i++)
    {
        if (v[0] == v[i])
        {
            vpme[menor] = i;
            menor++;
        }
    }

    printf ("\n\n Vetor Maior = %d\n",v[tam-1]);
    printf ("\n Quantidade Maior: %d\n", maior);
    printf ("\n Posicoes:");
    for(i = 0; i<maior;i++)
    {
        printf ("%d ", vpma[i]);
    }
    printf ("\n\n Vetor Menor = %d\n", v[0]);
    printf ("\n Quantidade Menor: %d\n", menor);
    printf ("\n Posicoes:");
    for(i = 0; i<menor;i++)
    {
        printf ("%d ", vpme[i]);
    }

    //FINALIZAR PROGRAMA

    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
