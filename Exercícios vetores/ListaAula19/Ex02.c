/*===============================================================

    2) Receber 50 números em um vetor do tipo inteiro de 50 posições. Validar durante a
entrada (geração) para que não tenha números repetidos e nem zero nesse vetor.
No final, limpar a tela e mostrar o vetor em sua ordem de entrada.
Obs.: validação durante a entrada de dados significa: receber o número em sua
posição do vetor atual, verificar nas posições anteriores se esse número existe,
caso verdadeiro, receber outro número nesta mesma posição e repetir o processo
de validação nas posições anteriores; caso contrário receber o próximo. E assim
por diante até encher o vetor.
** após a entrada, ordenar o vetor de forma DECRESCENTE e mostrar na tel;
** Usar somente um vetor
** usar funções


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

#define tam 50

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

    int v[tam], i, j, aux;

    //INICIALIZAR VARIAVEIS

    aux = 0;

    srand(time(NULL));

    for(i=0;i<tam;i++)
        v[i] = 0;

    for(i=0;i<tam;i++)
    {
        v[i] = (rand() % (tam - (tam*-1) + 1)) + (tam*-1);

        if (v[i] == 0)
            i--;

        else
            for(j = 0;j<i;j++)
                if(v[i]==v[j])
                    i--;
    }

    for(i=0;i<tam;i++)
        printf("\n Vetor[%d] = %d", i+1, v[i]);

    for(i=0;i<tam;i++)
        for(j=0;j<tam-1;j++)
            if(v[j]<=v[j+1])
            {
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }

    printf("\n");

    for(i=0;i<tam;i++)
        printf("\n Vetor[%d] = %d", i+1, v[i]);


    //FINALIZAR PROGRAMA

    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
