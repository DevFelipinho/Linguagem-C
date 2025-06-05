/*===============================================================

    Criar um MENU para que o usu�rio escolha um dos algoritmos abaixo, finalizar o menu (programa)
    quando a op��o escolhida for igual a 5.
     MENU DE OP��ES
     ===============
     1 � C�lculo do juros proporcional a quantidade de dias
     2 � C�lculo do Capital aplicado
     3 � C�lculo da quantidade de dias que o capital foi aplicado
     4 � C�lculo do �ndice da taxa de juros
     5 � sair
     Escolha o n�mero de uma das op��es acima...:
    Observa��o:
    1) Criar uma fun��o com passagem de par�metro por REFER�NCIA para montar o menu.
    2) Criar uma �nica fun��o com passagem de par�metro por REFER�NCIA, para receber as
    entradas, ou seja, mostrar uma mensagem na tela informando o que o usu�rio que tipo de
    dados dever� informar, chamar a fun��o ENTRADA, passando como refer�ncia o endere�o
    da respectiva vari�vel (capital, �ndice da taxa de juros mensal, tempo de aplica��o e valor do
    juros)
    3) Criar uma fun��o validar as entradas para serem maior que zero e retornar o valor para
    c�digo principal;
    L04_funcao_ex01 � Elaborar um algoritmo que solicite ao operador o valor do capital (aplica��o
    banc�ria), o �ndice da taxa de juros mensal e do tempo (quantidade de dias) a ser
    aplicado.
     Validar corretivamente todas as entradas, processar e mostrar o valor dos juros
    simples encontrado proporcional ao tempo aplicado.
    L04_funcao_ex02 � Elaborar um algoritmo que solicite ao operador o valor dos juros, do �ndice da
    taxa de juros e do tempo (quantidade de dias) a ser aplicado.
     Validar corretivamente todas as entradas, processar e mostrar o valor do capital
    aplicado.
    L04_funcao_ex03 � Elaborar um algoritmo que solicite ao operador o valor dos juros, o valor do do
    capital aplicado, do �ndice da taxa de juros.
     Validar corretivamente todas as entradas, processar e mostrar o tempo (quantidade
    de dias) de aplica��o encontrado.
    L04_funcao_ex04 � Elaborar um algoritmo que solicite ao operador o valor dos juros, o valor do
    capital aplicado, o tempo (quantidade de dias) de aplica��o.
     Validar corretivamente todas as entradas, processar e mostrar a taxa de juros
    encontrada.

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

//===============================================================
//============== LOCAL PARA DECLARAR OS PROTOTIPOS ==============
//===============================================================
void entrada (float *x);
void validar (float*x);
void menu (float *x);



//===============================================================
//============== LOCAL PARA CRIAR OS M�DULOS DE FUN��ES =========
//===============================================================
void entrada (float *x)
{
    fflush (stdin);
    scanf ("%f", &*x);
}
//===============================================================
void validar (float*x)
{
    while (*x <= 0)
    {
        printf ("\n Numero invalido, precisa ser maior que zero. Digite novamente: ");
        fflush (stdin);
        scanf ("%f", &*x);
    }
}
//===============================================================
void menu (float *x)
{
    while (*x != 1 && *x != 2 && *x != 3 && *x != 4 && *x != 5)
    {
        printf ("\n Opcao invalida, digite novamente: ");
        fflush (stdin);
        scanf ("%f", &*x);
    }
}
//===============================================================

//===============================================================

//===============================================================
//==============  CODIGO PRINCIPAL ==============================
//===============================================================
int main()
{
    //CRIAR VARIAVEIS

    float esco, capital, tempo, indice, valor;

    //INICIALIZAR VARIAVEIS

    esco = 0;
    capital = 0;
    tempo = 0;
    indice = 0;
    valor = 0;

    while (esco != 5)
    {
        printf ("\n\n\n                  MENU DE OPCOES");
        printf ("\n                  ===============");
        printf ("\n 1 - Calculo do juros proporcional a quantidade de dias");
        printf ("\n 2 - Calculo do Capital aplicado");
        printf ("\n 3 - Calculo da quantidade de dias que o capital foi aplicado");
        printf ("\n 4 - Calculo do indice da taxa de juros");
        printf ("\n 5 - Sair");
        printf ("\n");
        printf ("\n Escolha o numero de uma das opcoes acima: ");

        entrada(&esco);
        menu(&esco);
        system("cls");

        if (esco == 1)
        {
            printf ("\n Informe o valor do capital (aplicacao bancaria): ");
            entrada(&capital);
            validar(&capital);

            printf ("\n Informe o indice da taxa de juros mensal: ");
            entrada(&indice);
            validar(&indice);

            printf("\n Informe o tempo (quantidade de dias) a ser aplicado: ");
            entrada(&tempo);
            validar(&tempo);

            valor = capital * (indice/100) * (tempo/30);

            printf ("\n O valor dos juros simples eh: %.2f reais.", valor);

            printf ("\n\n\n\n Pressione qualquer tecla para voltar ao menu.");
            getch();

        }

        if (esco == 2)
        {
            printf ("\n Informe o valor dos juros: ");
            entrada(&valor);
            validar(&valor);

            printf ("\n Informe o indice da taxa de juros mensal: ");
            entrada(&indice);
            validar(&indice);

            printf("\n Informe o tempo (quantidade de dias) a ser aplicado: ");
            entrada(&tempo);
            validar(&tempo);

            capital = valor / ((indice/100) * (tempo/30));

            printf ("\n O valor do capital eh: %.2f reais.", capital);

            printf ("\n\n\n\n Pressione qualquer tecla para voltar ao menu.");
            getch();
        }

        if (esco == 3)
        {
            printf ("\n Informe o valor dos juros: ");
            entrada(&valor);
            validar(&valor);

            printf ("\n Informe o valor do capital (aplicacao bancaria): ");
            entrada(&capital);
            validar(&capital);

            printf ("\n Informe o indice da taxa de juros mensal: ");
            entrada(&indice);
            validar(&indice);

            tempo = (valor / ((indice/100) * capital)) * 30;

            printf ("\n O tempo de aplicacao em dias eh eh: %.0f dias.", tempo);

            printf ("\n\n\n\n Pressione qualquer tecla para voltar ao menu.");
            getch();
        }

        if (esco == 4)
        {
            printf ("\n Informe o valor dos juros: ");
            entrada(&valor);
            validar(&valor);

            printf ("\n Informe o valor do capital (aplicacao bancaria): ");
            entrada(&capital);
            validar(&capital);

            printf("\n Informe o tempo (quantidade de dias) a ser aplicado: ");
            entrada(&tempo);
            validar(&tempo);

            indice = (valor / ((tempo/30) * capital)) * 100;

            printf ("\n O indice da taxa de juros mensal eh: %.2f%%.", indice);

            printf ("\n\n\n\n Pressione qualquer tecla para voltar ao menu.");
            getch();
        }

        system ("cls");

    }




    //FINALIZAR PROGRAMA

    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
