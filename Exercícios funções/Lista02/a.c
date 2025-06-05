/*===============================================================

    Lista02_funcao_ex01 – Elabore um algoritmo em linguagem C, que permita executar conforme
    solicitado abaixo:
    a) Criar uma função para montar o MENU PRINCIPAL contendo as opções de uma
    calculadora e retornar o valor da opção, conforme abaixo:
    CALCULADORA
     1-) Fatorial de um número
     2-) Resto de uma divisão entre dois números inteiros
     3-) Exponencial entre dois números inteiro
     4-) finalizar programa.
     Digite uma das opções acima: ___
    b) Criar uma função para o cálculo do fatorial, a qual deverá retornar o resultado para o
    código principal, onde será mostrado seu valor;
    Observações para a regra matemática do fatorial:
     a representação matemática para o fatorial é pelo símbolo de exclamação
    (ex.: 6! );
     não existe fatorial de número negativo (validar corretivamente para não ser
    negativo);
     fatorial de 0 é igual a 1; e,
     o fatorial de um número é a multiplicação de todos os seus termos,
    começando em 1 até ele mesmo, ou seja, 6! = 1 * 2 * 3 * 4 * 5 * 6 = 720.
    c) Criar uma função para o cálculo do resto da divisão de forma que o resultado do
    cálculo seja retornado para o código principal onde será mostrado;
    d) Criar uma função para o cálculo do exponencial de forma que o resultado do cálculo
    seja retornado para o código principal onde será mostrado;
    Observações para a regra matemática do exponencial:
     Matematicamente, todo número elevado a 0 (zero) é igual a 1 (um);
     receber dois números inteiros e processar o cálculo do exponencial sem utilizar
    qualquer função pronta, tais como: exp, Ln, ^, entre outras. Você deverá criar
    um laço de repetição para efetuar o cálculo.
    e) Criar ÚNICA FUNÇÃO para ENTRADA seguintes dados:
     Para receber o número do fatorial;
     Para receber os números da base e do expoente;
     Para receber os dois números, visando o cálculo do resto da divisão entre eles.
    f) Uma ÚNICA FUNÇÃO para VALIDAR corretivamente as entradas (todos maiores ou
    igual a zero):
     do fatorial,
     da exponenciação, e;
     dos dois números para o cálculo do resto.

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

//===============================================================
//============== LOCAL PARA DECLARAR OS PROTOTIPOS ==============
//===============================================================
int opcao(float menu);
int fatorial ();
float entrada (float x);
 int validar (float x);






//===============================================================
//============== LOCAL PARA CRIAR OS MÓDULOS DE FUNÇÕES =========
//===============================================================
int opcao(float menu)
{

    int aux;
    aux = 0;


    printf("\n                 CALCULADORA");
    printf("\n");
    printf("\n 1-) Fatorial de um numero.");
    printf("\n 2-) Resto de uma divisao entre dois numeros inteiros.");
    printf("\n 3-) Exponencial entre dois numeros inteiro.");
    printf("\n 4-) Finalizar programa.");
    printf("\n");
    printf("\n Digite uma das opcoes acima: ");

    do
    {
        fflush (stdin);
        scanf ("%f", &menu);

        aux = menu;

        if (menu != 1 && menu != 2 && menu != 3 && menu != 4 || menu != aux)
        {
            printf ("\n Opcao invalida, digite novamente: ");
        }

    }while(menu != 1 && menu != 2 && menu != 3 && menu != 4 || menu != aux);

    system ("cls");

    return (menu);
}
//===============================================================
int fatorial ()
{

    float lim;
    int cont, resul;

    lim = cont = 0;
    resul = 1;

    printf ("\n Informe um numero inteiro e nao negativo: ");

    lim = entrada(lim);

    lim = validar(lim);

    for (cont = 1; cont<=lim; cont++)
    {
        resul = resul * cont;
    }

    printf ("\n !%.0f = ", lim);

    return (resul);
}
//===============================================================
float entrada (float x)
{
    fflush (stdin);
    scanf ("%f", &x);

    return (x);
}
//===============================================================
 int validar (float x)
 {
     int aux;
     aux = 0;
     do
    {
        aux = x;

        if (x < 0 || x != aux)
        {
            printf ("\n Numero invalido, digite novamente: ");
            fflush (stdin);
            scanf ("%f", &x);
        }

    }while (x < 0 || x != aux);

    return (x);
 }
//===============================================================
int divisao ()
{
    float num, den, res;
    int numi, deni;

    num = den = res = 0.0;

    printf ("\n Informe o numerador: ");

    num = entrada(num);

    num = validar(num);

    printf ("\n Informe o denominador: ");

    den = entrada(den);

    den = validar(den);

    while (den == 0)
    {
        printf ("\n O denominador nao pode ser zero, digite novamente: ");
        den = entrada(den);
        den = validar(den);
    }

    numi = num;
    deni = den;

    res = numi % deni;

    printf ("\n O resto da divisao %d / %d eh: ", numi, deni);

    return (res);
}
//===============================================================
int exponencial()
{
    float base, expo, cont, resul;
    base = 0;
    expo  = 0;
    cont = 0;
    resul = 1;

    printf ("\n Informe o numero da base: ");

    base = entrada(base);

    base = validar(base);



    printf ("\n Informe o numero do expoente: ");

    expo = entrada(expo);

    expo = validar(expo);

    if (expo != 0)
    {
        for (; cont<expo; cont++)
        {
            resul = resul*base;
        }
    }

    printf ("\n O numero %0.f elevado a %0.f eh: ", base, expo);
    return (resul);
}
//===============================================================
//==============  CODIGO PRINCIPAL ==============================
//===============================================================
int main()
{
    //CRIAR VARIAVEIS

    float menu, resul_fatorial, resul_divisao, resul_exponencial;

    //INICIALIZAR VARIAVEIS

    do
    {
        menu = 0;
        resul_fatorial = 0;
        resul_divisao = 0;
        resul_exponencial = 0;

        menu = opcao(menu);

        if (menu != 4)
        {

            if (menu == 1)
            {
                resul_fatorial = fatorial();

                printf ("%.0f", resul_fatorial);

            }

            else if (menu == 2)
            {
                resul_divisao = divisao();
                printf ("%.0f",resul_divisao);
            }

            else if (menu == 3)
            {
                resul_exponencial = exponencial();
                printf ("%0.f", resul_exponencial);
            }

            printf ("\n\n\n Pressione qualquer tecla para voltar ao menu.");
            getch();

            system ("cls");
        }

    }while (menu != 4);

    //FINALIZAR PROGRAMA

    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
