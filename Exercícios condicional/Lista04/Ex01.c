/*===============================================================

    L04_ex01 - Elaborar um algoritmo que receba dois números e um o símbolo para representação as operação básicas da
matemática ( +, - , *, / , ou seja: adição, subtração, multiplicação, divisão) processar e mostrar o resultado da operação do
primeiro número pelo segundo.
Obs.:
a) verificar para que não haja divisão por zero, caso aconteça, dê uma mensagem ao usuário.
b) Finalizar o algoritmo caso o sinal informado seja diferente dos sinais das operações básicas solicitadas

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

    float nr1, nr2, op;
    char sin;

    //INICIALIZAR VARIAVEIS

    sin = ' ';
    nr1 = 0;
    nr2 = 0;

    printf ("\n Informe o primeiro numero: ");
    fflush (stdin);
    scanf ("%f", &nr1);

    printf ("\n Informe o segundo numero: ");
    fflush (stdin);
    scanf ("%f", &nr2);

    printf ("\n Informe a operacao matematica (+, -, *, /): ");
    fflush (stdin);
    scanf ("%c", &sin);

    if (sin == '+')
    {
        system ("cls");

        op = nr1 + nr2;

        printf ("\n O resultado da soma dos numeros eh: %.2f", op);
    }

    else if (sin == '-')
    {
        system ("cls");

        op = nr1 - nr2;

        printf ("\n O resultado da subtracao dos numeros eh: %.2f", op);
    }

    else if (sin == '*')
    {
        system ("cls");

        op = nr1 * nr2;

        printf ("\n O resultado da multiplicacao dos numeros eh: %.2f", op);
    }

    else if (sin == '/')
    {

        if ((nr1 == 0) || (nr2 == 0))
        {
            printf ("\n\n Nao eh possivel dividir por zero.");
        }

        else
        {
            system ("cls");

            op = nr1 / nr2;

            printf ("\n O resultado da divisao dos numeros eh: %.2f", op);
        }

    }

    else
        printf ("\n\n Operacao invalida.");

    //FINALIZAR PROGRAMA

    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
