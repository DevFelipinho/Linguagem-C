/*===============================================================

    Lista03A_EX002 - Receber 2 valores, verificar se formam os lados de um retângulo, caso
verdadeiro calcular a área e mostrar no vídeo, senão, mostrar uma mensagem “Estes valores
não formam os lados de um retângulo”.
 OBS.: Verificar para não ter valores de entrada menor ou igual a zero durante cada entrada,
só receber o próximo valor caso o primeiro seja válido.


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

    float lad1, lad2, area;

    //INICIALIZAR VARIAVEIS

    lad1 = 0;
    lad2 = 0;
    area = 0;


    printf ("\n Informe o primeiro lado de um retangulo (maior que zero): ");
    fflush (stdin);
    scanf ("%f", &lad1);

    if (lad1 <= 0.0)
    {
        printf ("\n Invalido.");
    }


    else
    {
        printf ("\n Informe o segundo lado de um retangulo (maior que zero): ");
        fflush (stdin);
        scanf ("%f", &lad2);

        if (lad2 <= 0.0)
        {
             printf ("\n Invalido.");
        }

        else
        {
            if (lad1 == lad2)
            {

                system ("cls");
                printf ("\n Estes valores nao formam os lados de um retangulo.");
            }

            else
                {
                    area = lad1 * lad2;

                    system ("cls");

                    printf ("\n A area do retangulo eh : %.2f", area);
                }
        }

    }

    //FINALIZAR PROGRAMA

    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
