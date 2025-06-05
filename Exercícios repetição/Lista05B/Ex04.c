/*===============================================================

    L05B_ex04 – Elaborar um algoritmo que receba o sexo (“m” para masculino ou “f” para feminino) e altura (maior que
zero) de várias pessoas e finalizar a entrada dos dados quando for digitado “x” para o sexo.
 Ao final da entrada dos dados, mostrar a qual média de altura das mulheres e a média de altura dos
homens.
 Obs.: fazer as VALIDAÇÕES necessárias DURANTE A ENTRADA.

    CURSO: ANALISE E DESENVOLVIMENTO DE SISTEMAS - ADS
    1º PERÍODO - DISCIPLINA DE ALGORITMO E LÓGICA DE PROGRAMAÇÃO
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

    int quantm, quantf;
    char sx;
    float altf, altm, alt, medm, medf;

    //INICIALIZAR VARIAVEIS

    altm = 0;
    altf = 0;
    quantm = 0;
    quantf = 0;
    sx = ' ';
    medm = 0;
    medf = 0;



    while (sx != 'x' && sx != 'X')
    {

        printf ("\n Informe o sexo da pessoa (m para masculino, f para feminino e x se nao quiser adicionar mais pessoas): ");
        fflush (stdin);
        scanf ("%c", &sx);

        while (sx != 'm' && sx != 'M' && sx !=  'f' && sx != 'F' && sx != 'x' && sx != 'X')
        {
            printf ("\n TERMO INVALIDO, m para masculino, f para feminino e x se nao quiser adicionar mais pessoas: ");
            fflush (stdin);
            scanf ("%c", &sx);
        }
        if (sx != 'x' && sx != 'X')
        {
            printf ("\n Informe a altura em metros (maior que zero): ");
            fflush (stdin);
            scanf ("%f", &alt);

            while (alt <= 0 )
            {
                printf ("\n Altura invalida, informe a altura em metros novamente (maior que zero): ");
                fflush (stdin);
                scanf ("%f", &alt);
            }


            if (sx == 'm' || sx == 'M')
            {
                quantm+=1;
                altm+=alt;
            }

            if (sx == 'f' || sx == 'F')
            {
                quantf+=1;
                altf+=alt;
            }

        }

    }

    if (altm == 0 && altf != 0)
    {
        medf = altf / quantf;
        printf ("\n A media da altura masculina eh: 0 metro");
        printf ("\n\n A media da altura feminina eh: %.2f metros", medf);
    }

    else if (altf == 0 && altm != 0)
    {
        medm = altm / quantm;
        printf ("\n A media da altura masculina eh: %.2f metros", medm);
        printf ("\n\n A media da altura feminina eh: 0 metro");
    }

    else if ( altf == 0 && altm == 0)
    {
        printf ("\n A media da altura masculina eh: 0 metro");
        printf ("\n\n A media da altura feminina eh: 0 metro");
    }

    else if (altf != 0 && altm != 0)
    {
        medm = altm / quantm;
        medf = altf / quantf;

        printf ("\n A media da altura masculina eh: %.2f metros", medm);
        printf ("\n\n A media da altura feminina eh: %.2f metros", medf);
    }


    //FINALIZAR PROGRAMA

    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
