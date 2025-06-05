/*===============================================================

    3) Uma empresa da área sucroalcooleira pretende fazer uma avaliação dos transportadores de cana dos fornecedores
    para sua usina. O processo de entrada de dados consiste no seguinte conjunto de informações:
     código do transportador;
     código do motorista;
     código do fornecedor;
     código da viagem; e,
     quantidade de cana transportada (em quilos).
    Elabore um processo que permita apresentar as seguintes informações no final:
    a) a quantidade de cana total transportada em toneladas;
    b) a quantidade de cana separada em toneladas normais e toneladas excedentes;
    c) a quantidade de viagens total;
    d) a quantidade de viagens normais e excendentes;
    e) percentual de cana excedente em relação ao total de cana transportada;
    f) Percentual de cana normal em relação ao total de cana transportada.
    Observação
    a) a) os dados são consistentes (devem ser validados)
    b) b) os códigos do transportador, motorista e fornecedor estão no intervalo fechado de 1 a 99;
    c) c) considera-se como cana “excedente” aquela que ultrapassar 20 toneladas numa viagem (até 20 toneladas
    será considerada “viagem anormal”).
    Por exemplo: numa viagem em que a quantidade foi de 23,5 toneladas considera-se 20 toneladas como
    normais e 3,5 toneladas como excedentes.
     preste atenção nas conversões de toneladas para quilos, caso haja necessidade de conversão.

    CURSO: ANALISE E DESENVOLVIMENTO DE SISTEMAS - ADS
    1º PERÍODO - DISCIPLINA DE ALGORITMO E LÓGICA DE PROGRAMAÇÃO
    Nome do aluno(a):
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

    int codTrans, codMoto, codForn, codViag, quantVN, quantVE, quantV, quantVNT, quantVT, quantVET;
    float ton, tonE, tonN, quantCana, porcE, porcN, tonC, tonT, tonNT, tonET;
    char esco;

    //INICIALIZAR VARIAVEIS

    codTrans = codMoto = codForn = codViag = quantCana = ton = tonN = tonE = quantV = quantVE = quantVN = porcE = porcN = tonC = tonET = tonNT = tonT = quantVET = quantVNT = quantVT = 0;
    esco = ' ';

    do
    {

        printf("\n Informe o codigo do transportador: ");

        do
        {
            fflush (stdin);
            scanf("%d", &codTrans);

            if (codTrans < 1 || codTrans > 99)
            {
                printf ("\n Codigo invalido, digite novamente: ");
            }


        }while (codTrans < 1 || codTrans > 99);

        printf("\n Informe o codigo do motorista: ");

        do
        {
            fflush (stdin);
            scanf("%d", &codMoto);

            if (codMoto < 1 || codMoto > 99)
            {
                printf ("\n Codigo invalido, digite novamente: ");
            }


        }while (codMoto < 1 || codMoto > 99);

        printf("\n Informe o codigo do fornecedor: ");

        do
        {
            fflush (stdin);
            scanf("%d", &codForn);

            if (codForn < 1 || codForn > 99)
            {
                printf ("\n Codigo invalido, digite novamente: ");
            }


        }while (codForn < 1 || codForn > 99);

        printf("\n Informe o codigo da viagem: ");

        do
        {
            fflush (stdin);
            scanf("%d", &codViag);

            if (codViag < 1 || codViag > 99)
            {
                printf ("\n Codigo invalido, digite novamente: ");
            }


        }while (codViag < 1 || codViag > 99);

        printf ("\n Informe a quantidade de cana transportada (em quilos): ");
        fflush (stdin);
        scanf ("%f", &quantCana);

        while (quantCana<0)
        {
            printf ("\n Quantidade invalida, digite novamente: ");
            fflush (stdin);
            scanf ("%f", &quantCana);
        }

        ton = quantCana/1000;
        tonC = ton;

        if (tonC>=20)
        {
            tonN = 20;
            tonE = tonC - 20;

            quantVN++;
            tonC-=20;

            if (tonC>0)
            {
                quantVE++;
            }

        }

        else if (tonC >0 && tonC < 20)
        {
            tonN = tonC;
            quantVN++;
            tonE = 0;
        }

        quantV = quantVE + quantVN;

        tonT+=ton;
        tonNT+=tonN;
        tonET+=tonE;
        quantVT+=quantV;
        quantVET+=quantVE;
        quantVNT+=quantVN;

        quantV = 0;
        quantVE = 0;
        quantVN = 0;


        printf ("\n Deseja adicionar outro transportador(<<s>> para sim e <<n>> para nao)? ");

        do
        {
            fflush (stdin);
            scanf ("%c", &esco);
            if (esco!='s' && esco!='S' && esco!='n' && esco!='N')
            {
                printf ("\n Escolha invalida, digite novamente: ");
            }
        }while (esco!='s' && esco!='S' && esco!='n' && esco!='N');



    }while (esco!= 'N' && esco != 'n');

    porcE = (tonET/tonT) *100;
    porcN = (tonNT/tonT) *100;

    system ("cls");

    if (tonT == 0)
    {
        printf ("\n A quantidade de cana total transportada em toneladas eh: %.2f", tonT);
        printf ("\n A quantidade de cana em toneladas normais eh: %.2f", tonNT);
        printf ("\n A quantidade de cana em toneladas excedentes eh: %.2f", tonET);
        printf ("\n A quantidade de viagens total eh: %d", quantVT);
        printf ("\n A quantidade de viagens normais eh: %d", quantVNT);
        printf ("\n A quantidade de viagens excedentes eh: %d", quantVET);
        printf ("\n O percentual de cana excedente em relacao ao total de cana transportada eh: 0%%");
        printf ("\n O percentual de cana normal em relacao ao total de cana transportada eh: 0%%");
    }

    else
    {
        printf ("\n A quantidade de cana total transportada em toneladas eh: %.2f", tonT);
        printf ("\n A quantidade de cana em toneladas normais eh: %.2f", tonNT);
        printf ("\n A quantidade de cana em toneladas excedentes eh: %.2f", tonET);
        printf ("\n A quantidade de viagens total eh: %d", quantVT);
        printf ("\n A quantidade de viagens normais eh: %d", quantVNT);
        printf ("\n A quantidade de viagens excedentes eh: %d", quantVET);
        printf ("\n O percentual de cana excedente em relacao ao total de cana transportada eh: %.2f%%", porcE);
        printf ("\n O percentual de cana normal em relacao ao total de cana transportada eh: %.2f%%", porcN);
    }

    //FINALIZAR PROGRAMA
    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
