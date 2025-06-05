/*===============================================================

    L05C _ex02 � Elabore um algoritmo que solicite ao usu�rio um n�mero inteiro e positivo, validar corretivamente a
    entrada para que esse n�mero seja positivo, processe e apresente o resultado de seu fatorial.
    Sabendo que matematicamente, o fatorial de um n�mero � representado pelo s�mbolo de
    exclama��o, veja: 5!
    O 5! (cinco fatorial) equivale a multiplica��o de todos os termos, come�ando de 1 at� ele mesmo:
    1 * 2 * 3 * 4 * 5 = 120
    Por defini��o matem�tica, o fatorial de 0 (zero) � igual a 1 (um).
    Obs.1: Valida��o corretiva � um processo que usamos para receber a informa��o e durante esta
    entrada j� verificar � verdadeira, ou seja, enquanto for falsa estar� dentro la�o de repeti��o at� que
    o usu�rio digite o valor correto. Veja o exemplo deste algoritmo.

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

    int quant, fat, cont, cont2;

    //INICIALIZAR VARIAVEIS

    cont = 0;
    fat = 1;
    quant = 0;
    cont2 = 1;

    printf ("\n Informe um numero inteiro e positivo: ");

    do
    {
        fflush (stdin);
        scanf ("%d", &quant);

        if (quant<=0)
        {
            printf ("\n Numero invalido, digite novamente: ");
        }
    }while (quant<=0);

    do
    {
        fat = fat * cont2;
        cont++;
        cont2++;

    }while (cont<quant);

    printf ("\n O fatorial desse numero eh: %d", fat);

    //FINALIZAR PROGRAMA

    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
