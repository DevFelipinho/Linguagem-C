/*===============================================================

    L05B_ex01 � A s�rie de Fibonacci � formada pela seguinte seq��ncia: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ..., etc.
Elabore um algoritmo que receba via teclado A QUANTIDADE DE TERMOS que o cliente (usu�rio)
deseja visualizar na tela. Por exemplo, caso seja informado 20, mostrar os 20 primeiros n�meros da
s�rie.
1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4182, 6765.
Obs.: fazer de forma que o usu�rio possa �voltar� e executar com outro quantitativo,
respondendo << s >> sim, e ou << n >> para n�o
Fazer todas as VALIDA��ES de entradas (quantidade de termos e resposta �s� ou �n� e/ou �S� ou �N�).


    CURSO: ANALISE E DESENVOLVIMENTO DE SISTEMAS - ADS
    1� PER�ODO - DISCIPLINA DE ALGORITMO E L�GICA DE PROGRAMA��O
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
