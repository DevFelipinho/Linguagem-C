/*===============================================================

    L05B_ex01 – A série de Fibonacci é formada pela seguinte seqüência: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ..., etc.
Elabore um algoritmo que receba via teclado A QUANTIDADE DE TERMOS que o cliente (usuário)
deseja visualizar na tela. Por exemplo, caso seja informado 20, mostrar os 20 primeiros números da
série.
1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4182, 6765.
Obs.: fazer de forma que o usuário possa “voltar” e executar com outro quantitativo,
respondendo << s >> sim, e ou << n >> para não
Fazer todas as VALIDAÇÕES de entradas (quantidade de termos e resposta ‘s’ ou ‘n’ e/ou ‘S’ ou ‘N’).


    CURSO: ANALISE E DESENVOLVIMENTO DE SISTEMAS - ADS
    1º PERÍODO - DISCIPLINA DE ALGORITMO E LÓGICA DE PROGRAMAÇÃO
    Nome do aluno(a): Felipe Lara Facin
    1 SEMESTRE 2025
    Prof. Ernani Claudio Borges
    data: Abril 2025

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

    int cont1, cont2, nm, aux;
    char esco;

    //INICIALIZAR VARIAVEIS

    cont1 = 1;
    cont2 = 1;
    nm = 0;
    aux = 0;
    esco = 's';



    while (esco == 's' || esco == 'S' || esco == 'n' || esco == 'N')
    {
        while (esco == 's' || esco == 'S')
        {
            printf ("\n Informe a quantidade de termos da serie de Fibonacci a ser mostrado na tela: ");
            fflush (stdin);
            scanf ("%d", &nm);
            printf ("\n");

            while (nm < 0)
            {
                printf ("\n O numero nao pode ser negativo, informe novamente a quantidade de termos: ");
                fflush (stdin);
                scanf ("%d", &nm);
                printf ("\n");
            }

            if (nm >= 1 )
            {
                printf (" %d", cont1);
                cont1+=cont2;
                Sleep (150);
                aux++;

            }

            if (nm >= 2)
            {
                printf (", %d", cont2);
                cont2+=cont1;
                Sleep (150);
                aux++;
            }

            while (aux < nm )
            {
                if (aux < nm)
                {
                    printf (", %d", cont1);
                    cont1+=cont2;
                    Sleep (150);
                    aux++;
                }

                if (aux < nm)
                {
                    printf (", %d", cont2);
                    cont2+=cont1;
                    Sleep (150);
                    aux++;
                }

            }

            printf ("\n\n Deseja informar outra quantidade de termos (digite s para sim e n para nao)?  ");
            fflush (stdin);
            scanf ("%c", &esco);

            while (esco != 's' && esco != 'S' && esco != 'n' && esco != 'N')
            {
                printf ("\n\n Termo invalido, digite s para sim e n para nao?  ");
                fflush (stdin);
                scanf ("%c", &esco);
            }

            cont1 = 1;
            cont2 = 1;
            nm = 0;
            aux = 0;

            system ("cls");


        }

        if (esco == 'n' || esco == 'N')
        {
            esco = ' ';
        }

    }

    //FINALIZAR PROGRAMA

    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
