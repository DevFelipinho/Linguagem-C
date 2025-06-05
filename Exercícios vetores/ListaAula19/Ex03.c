/*===============================================================

    3) Receber 50 números em um vetor do tipo inteiro (validar para que sejam MAIOR
QUE ZERO e não tenha número repetido no vetor).
Após receber os 50 números, limpar a tela::
 mostrar o vetor em sua forma de entrada;
 receber um número qualquer e verificar se ele existe no vetor, caso exista
mostrar qual a posição (índice) do vetor ele está, caso não exista esse número,
mostrar uma mensagem.
 Fazer de forma que o usuário possa informar outro número de pesquisa,
mantendo os números já existentes no vetor sem alterar, ou finalizar o
algoritmo caso seja digitado o número ZERO para o número de pesquisa.
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

    int v[tam], i, j, num, cont;

    //INICIALIZAR VARIAVEIS

    srand(time(NULL));
    num = 1;
    cont = 0;

    for(i=0;i<tam;i++)
        v[i] = 0;

    for(i=0;i<tam;i++)
    {
        v[i] = 1 + rand() % (tam);

        for(j = 0;j<i;j++)
            if(v[i]==v[j])
            i--;
    }

    for(i=0;i<tam;i++)
        printf("\n Vetor[%d] = %d", i+1, v[i]);

    while (num!= 0)
    {
        printf ("\n\n Informe um numero(digite zero para sair): ");
        fflush (stdin);
        scanf ("%d", &num);

        if (num!= 0)
        {
            for(i=0;i<tam;i++)
                if (num == v[i])
                {
                    if (cont == 0)
                    {
                        printf ("\n Posicao do numero existente no vetor = [%d]", i);
                        cont++;
                    }

                    else
                        printf (" [%d]",i);

                }

            if (cont == 0)
                printf ("\n Nao houve posicao com esse numero.");
        }

        cont = 0;
    }

    //FINALIZAR PROGRAMA

    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
