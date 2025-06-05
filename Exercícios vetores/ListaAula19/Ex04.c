/*===============================================================

    4) Receber 50 números em um vetor do tipo inteiro (validar para que sejam MAIOR
QUE ZERO). Após receber os 50 números, limpar a tela:
 mostrar o vetor;
 Mostrar quais aparecem mais de uma vez e quantas vezes (não mostrar os
números já mostrados)
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

    int v[tam], i, cont, j, dife;

    //INICIALIZAR VARIAVEIS

    cont = dife = 0;

    srand(time(NULL));

    for(i=0;i<tam;i++)
        v[i] = 0;

    for(i=0;i<tam;i++)
    {
        v[i] = 1 + rand() % (tam);
    }

    for(i=0;i<tam;i++)
        printf("\n Vetor[%d] = %d", i+1, v[i]);

    printf("\n");


    for(i=0;i<tam;i++)
    {
        for(j=i;j>=0;j--)
            if (v[i] == v[j-1])
                dife++;

        if (dife ==0)
            for(j=0;j<tam;j++)
                if (v[i] ==v[j])
                    cont++;

        if (cont>1)
            printf ("\n O %d aparece %d vezes.", v[i], cont);

        cont = 0;
        dife = 0;
    }


    //FINALIZAR PROGRAMA

    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
