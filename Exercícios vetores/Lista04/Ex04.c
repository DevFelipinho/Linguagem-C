/*===============================================================

    Lista04_vetor_ex04 – Vamos simular um comércio de mercadorias (um mini supermercado).
 Faça um algoritmo que:
a) Receba um vetor chamado PROD de 100 elementos (posições) contendo o nome de produtos;
b) Receba um vetor chamado VLCUSTO de 100, o qual irá conter o valor de custo de cada uma das
mercadorias (em sua ordem de entrada).
c) Receba um vetor chamado VLVENDA de 100, o qual irá conter o valor de venda de cada uma das
mercadorias (em sua ordem de entrada, e esse valor não pode ser menor que o VLCUSTO);
d) Calcule o lucro obtido (VLVENDA - VLCUSTO), guardando o resultado em um vetor chamado LUCRO
de 100 elementos.
Processar e mostrar:
a) Qual o maior valor de venda e o nome(s) da(s) mercadoria(s);
b) Qual o menor valor de lucro e o nome(s) da(s) mercadoria(s);
c) O valor total de custo;
d) O valor total de venda; e,
e) O valor total de lucro.

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

#define tam 100

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

    char prod[tam][1000];
    float vlcusto[tam], vlvenda[tam], lucro[tam], maiorv, menorl, vlcustot, vlvendat, lucrot;
    int i, j;

    //INICIALIZAR VARIAVEIS

    maiorv = 0;
    menorl = 0;
    vlcustot = 0;
    vlvendat = 0;
    lucrot = 0;

    for (i = 0; i < tam; i++)
    {
        strcpy(prod[i], "");
        vlcusto[i] = 0;
        vlvenda[i] = 0;
        lucro[i] = 0;
    }

    for (i = 0; i < tam; i++)
    {
        printf ("\n Informe o nome do produto[%d]: ", i+1);
        fflush (stdin);
        gets(prod[i]);

        if (strcmp(prod[i],"") == 0)
            i--;

        for (j = 0; j < i; j++)
        {
            if (strcmp(prod[i],prod[j]) == 0)
            {
                printf ("\n Produto repetido.\n");
                i--;
            }

        }
    }

    for (i = 0; i < tam; i++)
    {
        printf ("\n Informe o valor de custo do produto[%d]: ", i+1);
        fflush (stdin);
        scanf ("%f", &vlcusto[i]);

        vlcustot+=vlcusto[i];
    }

    for (i = 0; i < tam; i++)
    {
        printf ("\n Informe o valor de venda do produto[%d]: ", i+1);
        fflush (stdin);
        scanf ("%f", &vlvenda[i]);

        if (vlvenda[i]<vlcusto[i])
        {
            printf("\n O valor de venda nao pode ser menor que o valor do custo.\n");
            i--;
        }

        else
        {
            for (j = 0; j <= i; j++)
            {
                if (maiorv <= vlvenda[j])
                    maiorv = vlvenda[j];
            }

            vlvendat+=vlvenda[i];
        }

    }

    for (i = 0; i < tam; i++)
    {
        lucro[i] = vlvenda[i] - vlcusto[i];

        if (i == 0)
            menorl = lucro[i];

        else if (menorl >= lucro[i])
            menorl = lucro[i];

        lucrot+=lucro[i];

    }


    system ("cls");

    printf ("\n              Relatorio do mercado\n");
    printf ("\n");
    printf ("\n");
    printf ("\n Maior valor de venda: %.2f reais.  Mercadorias: ", maiorv);
    for (i = 0; i < tam; i++)
        if (maiorv == vlvenda[i])
            printf ("%s ", prod[i]);
    printf ("\n");
    printf ("\n Menor valor de lucro: %.2f reais.  Mercadorias: ", menorl);
    for (i = 0; i < tam; i++)
        if (menorl == lucro[i])
            printf ("%s ", prod[i]);
    printf ("\n");
    printf ("\n Valor total de custo: %.2f reais.", vlcustot);
    printf ("\n Valor total de venda: %.2f reais.", vlvendat);
    printf ("\n Valor total de lucro: %.2f reais.", lucrot);

    //FINALIZAR PROGRAMA

    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
