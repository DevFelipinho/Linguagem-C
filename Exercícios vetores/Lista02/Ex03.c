/*===============================================================

    Lista02_vetor_ex03 � Um armaz�m trabalha com 100 mercadorias diferentes identificadas pelos n�meros de 1 a
100. O dono do armaz�m anota a quantidade de cada mercadoria vendida durante o m�s. Ele tem uma
tabela que indica para cada mercadoria o pre�o de venda. Elabore um algoritmo para calcular o faturamento
mensal do armaz�m, isto �:
Faturamento = (quantidade[ i ] * pre�o[ i ] ) + faturamento

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

#define tam 10

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

    int quant[tam], preco[tam], fatura, i;

    //INICIALIZAR VARIAVEIS

    srand (time(NULL));

    fatura = 0;

    for(i = 0; i<tam; i++)
    {
        quant[i] = 0;
        preco[i] = 0;
    }

    for(i = 0; i<tam; i++)
    {
        quant[i] = rand() % (tam);
        preco[i] = rand() % (tam);
    }

    for(i = 0; i<tam; i++)
    {
        fatura = (preco[i] * quant[i]) + fatura;
    }

    for(i = 0; i<tam; i++)
    {
        printf ("\n Vetor quant[%d] = %d", i , quant[i]);
        printf ("\n Vetor preco[%d] = %d", i , preco[i]);
    }

    printf ("\n Faturamento = %d",fatura);

    //FINALIZAR PROGRAMA

    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
