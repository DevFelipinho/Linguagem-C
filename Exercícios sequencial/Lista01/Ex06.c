/*===============================================================

    L01_006.alg - Elabore um algoritmo que leia (receba) um número inteiro entre 1 e 10 (desprezar a verificação,
imagine que ninguém irá digitar um número menor que 1 ou maior que 10, por enquanto), calcule e mostre
no vídeo a tabuada deste número.

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

    int nr, tab0, tab1, tab2, tab3, tab4, tab5, tab6, tab7, tab8, tab9, tab10;

    //INICIALIZAR VARIAVEIS

    nr = 0;
    tab0 = 0;
    tab1 = 0;
    tab2 = 0;
    tab3 = 0;
    tab4 = 0;
    tab5 = 0;
    tab6 = 0;
    tab7 = 0;
    tab8 = 0;
    tab9 = 0;
    tab10 = 0;

    printf ("\n Informe um numero de 1 a 10: ");
    fflush (stdin);
    scanf ("%d", &nr);

    while (nr > 10 || nr < 1)
    {
        printf ("\n\n Por favor, informe um numero de 1 a 10: ");
        fflush (stdin);
        scanf ("%d", &nr);
    }


    tab0 = nr * 0;
    tab1 = nr * 1;
    tab2 = nr * 2;
    tab3 = nr * 3;
    tab4 = nr * 4;
    tab5 = nr * 5;
    tab6 = nr * 6;
    tab7 = nr * 7;
    tab8 = nr * 8;
    tab9 = nr * 9;
    tab10 = nr * 10;


    system ("cls");

    printf ("\n A tabuada do %d eh:", nr);
    printf ("\n %d x 0= %d", nr, tab0);
    printf ("\n %d x 1= %d", nr, tab1);
    printf ("\n %d x 2= %d", nr, tab2);
    printf ("\n %d x 3= %d", nr, tab3);
    printf ("\n %d x 4= %d", nr, tab4);
    printf ("\n %d x 5= %d", nr, tab5);
    printf ("\n %d x 6= %d", nr, tab6);
    printf ("\n %d x 7= %d", nr, tab7);
    printf ("\n\ %d x 8= %d", nr, tab8);
    printf ("\n %d x 9= %d", nr, tab9);
    printf ("\n %d x 10= %d", nr, tab10);

    //FINALIZAR PROGRAMA

    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
