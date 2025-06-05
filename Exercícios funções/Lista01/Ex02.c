/*===============================================================

    Lista01_funcao_ex02 � Elabore um algoritmo em linguagem C, que receba tr�s n�meros inteiros,
    representando horas, minutos e segundos. Processar e mostrar a convers�o total em segundos.
    Exemplo: 2h, 40 min e 10 seg correspondem a 9610 segundos.
     Obs.:
    1) Criar uma �nica fun��o com passagem de par�metro por �valor�, para validar as entradas (horas,
    minutos e segundos (cada um em seu tempo de entrada)) para serem maior ou igual a zero;
    2) criar uma fun��o que receba esses TR�S PAR�METROS de entrada (hora, minuto e segundo),
    processar a convers�o para SEGUNDOS e retornar esse valor para o c�digo principal, onde ser�
    mostrado para o usu�rio.


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
void validar (float *tempo);
int conversao (int hora, int min, int seg);




//===============================================================
//============== LOCAL PARA CRIAR OS M�DULOS DE FUN��ES =========
//===============================================================
void validar (float *tempo)
{
    int aux;
    aux = 0;

    do
    {
        fflush (stdin);
        scanf ("%f", &*tempo);

        aux = *tempo;

        if (*tempo<0 || aux!=*tempo)
        {
            printf ("\n Quantidade invalida, digite novamente: ");
        }

    }while (*tempo<0 || aux!=*tempo);
}
//===============================================================
int conversao (int hora, int min, int seg)
{
    int resultado;

    resultado = 0;

    hora*=3600;
    min*=60;

    resultado = hora + min + seg;

    return (resultado);
}
//===============================================================

//===============================================================

//===============================================================

//===============================================================
//==============  CODIGO PRINCIPAL ==============================
//===============================================================
int main()
{
    //CRIAR VARIAVEIS

    float hora, min, seg;
    int resultado;

    //INICIALIZAR VARIAVEIS

    hora = 0.0;
    min = 0.0;
    seg = 0.0;
    resultado = 0;

    printf ("\n Informe a quantidade de horas: ");

    validar(&hora);

    printf ("\n Informe a quantidade de minutos: ");

    validar(&min);

    printf ("\n Informe a quantidade de segundos: ");

    validar(&seg);

    resultado = conversao (hora, min, seg);

    printf ("\n A conversao dos tres valores para segundos eh: %d", resultado);

    //FINALIZAR PROGRAMA

    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
