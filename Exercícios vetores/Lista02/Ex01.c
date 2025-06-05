/*===============================================================

    Lista02_vetor_ex01 – Elabore um algoritmo que receba via teclado um vetor 40 posições para armazenar
números reais. Processar e mostrar o menor valor existente entre os 20 primeiros e o maior valor existente
entre os 20 últimos.
 Obs.: lembrando que para efeitos de comparação para o menor número, o primeiro número do vetor será o
parâmetro de comparação com os demais. Isto serve para o maior, porém, o vigésimo número será o
parâmetro.


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

#define tam 6

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

    int a[tam], i, men, mai;

    srand (time(NULL));

    for(i = 0; i<tam; i++)
    {
        a[i] = 0;
    }

    mai = 0;
    men = 0;

    for(i = 0; i<tam; i++)
    {
        a[i] = rand() % (100);

        if(i>=0 && i<3)
        {
            if(i==0)
            {
                men = a[i];
            }

            else if (a[i] < men)
            {
                men = a[i];
            }
        }

        if(i>=3 && i<6)
        {
            if(i==3)
            {
                mai = a[i];
            }

            else if (a[i] > mai)
            {
                mai = a[i];
            }
        }
    }

    for(i = 0;i<tam;i++)
    {
        printf ("\n Vetor a[%d]= %d", i, a[i]);
    }


    printf ("\n Menor= %d", men);
    printf ("\n Maior= %d", mai);







    //INICIALIZAR VARIAVEIS

    //FINALIZAR PROGRAMA

    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
