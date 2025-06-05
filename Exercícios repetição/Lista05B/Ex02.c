/*===============================================================

    L05B_ex02 � A convers�o de graus Fahrenheit para C�lcius � obtida pela f�rmula:
C = 5 / 9 * (F � 32)
 Elabore um algoritmo que calcule e escreva no v�deo o n�mero de graus Fahrenheit e seu respectivo
graus C�lcius, variando de 1 em 1 a partir de 32 para o valor de Fahrenheit at� chegar a na quantidade
de convers�es que o cliente deseja.
 Obs.: fazer de forma que o usu�rio possa �voltar� e executar com outro quantitativo, respondendo << s
>> sim, e ou << n >> para n�o
 Fazer todas as valida��es de entradas.


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

    float fah, cel, cont;
    char esco;
    int quantc;


    //INICIALIZAR VARIAVEIS

    fah = 32;
    cel = 0;
    quantc = 0;
    esco = 's';
    cont = 0;

    while (esco == 's' || esco == 'S')
    {
        printf ("\n Informe a quantidade de conversoes de graus Fahrenheit para graus Celsius: ");
        fflush (stdin);
        scanf ("%d", &quantc);

        while (quantc < 0)
        {
            printf ("\n A quantidade nao pode ser negativa, digite outro valor: ");
            fflush (stdin);
            scanf ("%d", &quantc);
        }

        system ("cls");

        while (cont < quantc)
        {
            cel = 5.0/9.0 * (fah - 32);

            printf ("\n %.2f Fahrenheit = %.2f Celsius \n", fah, cel);

            fah++;
            cont++;
            Sleep (150);
        }

        printf ("\n Deseja executar o programa com outro quantitativo (s para sim e n para nao): ");
        fflush (stdin);
        scanf ("%c", &esco);

        while (esco != 's' && esco != 'S' && esco != 'n' && esco != 'N')
        {
            printf ("\n Invalido, s para sim e n para nao: ");
            fflush (stdin);
            scanf ("%c", &esco);
        }

        fah = 32;
        cont = 0;

    }



    //FINALIZAR PROGRAMA

    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
