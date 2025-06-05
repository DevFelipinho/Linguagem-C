/*===============================================================

    Criar um Menu para executar os algoritmos abaixo:
    MENU PRINCIPAL
    1) Histograma Horizontal
    2) Maior diferen�a entre dois elementos consecutivos
    3) Maior, Menor numero e suas posicoes � e depois ordenar
    4) Finalizar
    Informe uma das op��es acima (1, 2, 3 ou 4) �:
    Ex_aula_Ex01 � Elaborar um algoritmo que um vetor de 50 posi��es de n�meros inteiros.
    Processar e mostrar um histograma horizontal de asteriscos:
    VET 7 3 5 8
    0 1 2 3 4 5 6 7 8 9
     Posi��o conte�do histograma
    0 7 * * * * * * *
    1 3 * * *
    2 5 * * * * *
    3 8 * * * * * * * *
    ... ...
    Obs:
    a) Uma fun��o que imprima o histograma de asteriscos na tela;
    Ex_aula_Ex02 � Dado um vetor X do tipo inteiro, de dimens�o igual 50, calcular a maior
    diferen�a entre dois elementos consecutivos de X, e mostrar quem s�o e quais suas posi��es.
    Obs.: Validar corretivamente durante a entrada para ter somente n�meros positivos.
    VET 30 8 24 36 45 9 7 3 29 31 ...
    posi��o 0 1 2 3 4 5 6 7 8 9 ... 47 48 49
    Obs.: criar as seguintes fun��es:
    a) fun��o que receba os dois n�meros consecutivos e retornar a diferen�a
    Ex_aula_Ex03 � Receber um vetor de 100 posi��es, validar corretivamente durante a entrada
    para n�o ter n�mero repetido nas posi��es anteriores.
    a) Mostrar o vetor em sua forma de entrada
    b) Mostrar qual o maior n�mero e em qual posi��o (�ndice) ele est�;
    c) Mostrar qual o menor n�mero e em qual posi��o (�ndice) ele est�;
    Ap�s as amostragens acima, ordenar o vetor de forma crescente e mostr�-lo na tela.
    Observa��es:
    a) Criar uma fun��o para ordenar o vetor em ordem crescente;
    Observa��es:
    a) Uma fun��o para montar o menu .
    b) criar UMA �nica fun��o de entrada e de validar inteiro e maior que zero e no caso do
    primeiro algoritmo para que seja menor que 25, de forma que atenda as entradas dos TR�S
    ALGORITMOS.
    c) criar UMA �nica fun��o de mostrar o vetor de forma que atenda os TR�S ALGORITMOS.

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
#define tamm 100

//===============================================================
//============== LOCAL PARA DECLARAR OS PROTOTIPOS ==============
//===============================================================
float menu(float esco);
void entradamenu(float *esco);
float entrada(float x, float esco);
float verificar (float x, float esco);
void imprimir(float v[], float *esco, float *mdife);
float diferenca (float dife, float pa, float pb);
void crescente(float v[]);

//===============================================================
//============== LOCAL PARA CRIAR OS M�DULOS DE FUN��ES =========
//===============================================================
float menu(float esco)
{
    printf ("\n\n\n            MENU PRINCIPAL");
    printf ("\n");
    printf ("\n 1) Histograma Horizontal");
    printf ("\n 2) Maior diferenca entre dois elementos consecutivos");
    printf ("\n 3) Maior, Menor numero e suas posicoes - e depois ordenar");
    printf ("\n 4) Finalizar");
    printf ("\n");
    printf ("\n Informe uma das opcoes acima(1, 2, 3 ou 4): ");

    entradamenu(&esco);

    return (esco);
}
//===============================================================
void entradamenu(float *esco)
{
    do
    {
        fflush (stdin);
        scanf ("%f", &*esco);

        if (*esco != 1 && *esco != 2 && *esco != 3 && *esco != 4)
            printf ("\n Opcao invalida, digite novamente: ");

    }while (*esco != 1 && *esco != 2 && *esco != 3 && *esco != 4);

}
//===============================================================
float entrada(float x, float esco)
{
    fflush (stdin);
    scanf ("%f", &x);

    x = verificar(x, esco);

    return (x);
}
//===============================================================
float verificar (float x, float esco)
{
    int xi;

    xi = 0;
    xi = x;

    if (esco == 1)
        while (x != xi || x<=0 || x>=25)
        {
            if (x!= xi)
                printf ("\n Numero invalido, o numero precisa ser inteiro. Digite novamente: ");

            else if (x<=0)
                printf ("\n Numero invalido, o numero precisa ser maior que zero. Digite novamente: ");

             else if (x>=25)
                printf ("\n Numero invalido, o numero precisa ser menor que 25. Digite novamente: ");

            fflush (stdin);
            scanf ("%f", &x);

            xi = x;
        }

    else
        while (x != xi || x<=0)
        {
            if (x!= xi)
                printf ("\n Numero invalido, o numero precisa ser inteiro. Digite novamente: ");

            else if (x<=0)
                printf ("\n Numero invalido, o numero precisa ser maior que zero. Digite novamente: ");

            fflush (stdin);
            scanf ("%f", &x);

            xi = x;
        }

    return (x);
}
//===============================================================
void imprimir(float v[], float *esco, float *mdife)
{
    int i, j, maior, menor;
    float dife;
    dife = 0;
    maior = 0;
    menor = 0;

    if (*esco == 1)
    {
        printf ("\n Posicao        Conteudo        Histograma\n");
        for(i=0;i<tam;i++)
        {
            printf ("\n    %-10d     %-10.0f     ", i, v[i]);
            for(j=0;j<v[i];j++)
                printf ("*");
        }
    }

    else if (*esco == 2)
    {
        printf ("\n Maior diferenca: %.0f\n", *mdife);

        for(i=0;i<tam-1;i++)
        {
            dife = diferenca(dife, v[i], v[i+1]);

            if(dife==*mdife)
                printf ("\n Vetor[%d] = %.0f e Vetor[%d] = %.0f", i, v[i], i+1, v[i+1]);

        }
    }

    else if (*esco == 3)
    {
        for(i=0;i<tamm;i++)
            printf("\n Vetor[%d] = %.0f", i, v[i]);

        for(i=0;i<tamm;i++)
        {
            if (i==0)
            {
                maior = v[i];
                menor = v[i];
            }

            else if (v[i]>maior)
                maior = v[i];

            else if (v[i]<menor)
                menor = v[i];
        }

        printf ("\n\n Maior numero: %-3d   Posicao: ", maior);
        for(i=0;i<tamm;i++)
            if (v[i] == maior)
                printf ("%d ",i);

        printf ("\n Menor numero: %-3d   Posicao: ", menor);
        for(i=0;i<tamm;i++)
            if (v[i] == menor)
                printf ("%d ",i);

    }

}
//===============================================================
float diferenca (float dife, float pa, float pb)
{
    dife =  pa - pb;

    if (dife <0)
        dife*=-1;

    return (dife);
}
//===============================================================
void crescente(float v[])
{
    int i, aux, j;

    aux = 0;

    for(i=0;i<tamm;i++)
        for(j=0;j<tamm-1;j++)
            if (v[j]>v[j+1])
            {
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }

    printf ("\n\n       Vetor em ordem crescente\n");

    for(i=0;i<tamm;i++)
        printf ("\n Vetor[%d] = %.0f", i, v[i]);
}
//===============================================================
//===============================================================
//==============  CODIGO PRINCIPAL ==============================
//===============================================================
int main()
{
    //CRIAR VARIAVEIS

    float esco, v[tam], dife, mdife, vm[tamm];
    int i, j;

    //INICIALIZAR VARIAVEIS

    while (esco != 4)
    {
        esco = 0;
        dife = 0;
        mdife = 0;

        for(i=0;i<tam;i++)
        {
            v[i] = 0;
        }

        for(i=0;i<tamm;i++)
        {
            vm[i] = 0;
        }

        esco = menu(esco);

        system ("cls");

        if(esco!=4)
        {
            if (esco == 1)
            {
                for(i=0;i<tam;i++)
                {
                    printf ("\n Informe o vetor[%d] = ", i);
                    v[i] = entrada(v[i], esco);
                }

                system ("cls");

                imprimir(v, &esco, &mdife);

                printf ("\n\n\n\n Pressione qualquer tecla para voltar ao menu.");
                getch();

            }

            else if (esco == 2)
            {
                for(i=0;i<tam;i++)
                {
                    printf ("\n Informe o vetor[%d] = ", i);
                    v[i] = entrada(v[i], esco);
                }

                system ("cls");

                for(i=0;i<tam-1;i++)
                {
                    dife = diferenca(dife, v[i], v[i+1]);

                    if(dife>mdife)
                        mdife = dife;
                }

                imprimir(v, &esco, &mdife);

                printf ("\n\n\n\n Pressione qualquer tecla para voltar ao menu.");
                getch();
            }

            else if (esco == 3)
            {
                for(i=0;i<tamm;i++)
                {
                    printf ("\n Informe o vetor[%d] = ", i);
                    vm[i] = entrada(vm[i], esco);

                    for (j=0;j<i;j++)
                        if(vm[i] == vm[j])
                        {
                            i--;
                            printf ("\n Numero invalido, o numero nao pode ser repetido.\n");
                        }
                }

                system ("cls");

                imprimir(vm, &esco, &mdife);

                crescente(vm);

                printf ("\n\n\n\n Pressione qualquer tecla para voltar ao menu.");
                getch();
            }

            system ("cls");
        }
    }



    //FINALIZAR PROGRAMA

    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
