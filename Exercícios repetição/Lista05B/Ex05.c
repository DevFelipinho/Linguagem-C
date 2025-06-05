/*===============================================================

    L05B_ex05 � Uma rainha requisitou os servi�os de um monge e disse-lhe que pagaria qualquer pre�o. O monge,
necessitando de alimentos, indagou � rainha sobre o pagamento, se poderia ser feito com gr�os de trigo
dispostos num tabuleiro de xadrez, de tal forma que o primeiro quadro deveria conter apenas um gr�o e
os quadros subseq�entes, o dobro do quadro anterior.
 A rainha achou o trabalho barato e pediu que o servi�o fosse executado, sem se dar conta de
que seria imposs�vel efetuar o pagamento.
 Elabore um algoritmo que calcule o n�mero de gr�os que o monge esperava receber.
Aten��o: neste exerc�cio ser� necess�rio utilizar o tipo de dados real devido ao resultado ter um valor
muito alto, evitando o �estouro� de mem�ria (over flow).

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

    float grao, cont, col;

    //INICIALIZAR VARIAVEIS

    grao = 1;
    cont = 1;
    col = 1;

    while (cont <= 63)
    {
        if (col <= 5)
        {
            printf ("%20.0f, ", grao);
            Sleep (150);

            grao*=2;
            cont++;
            col++;
        }
        else
        {
            printf ("\n");
            col = 1;
        }


    }

    printf ("%10.0f", grao);

    //FINALIZAR PROGRAMA

    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
