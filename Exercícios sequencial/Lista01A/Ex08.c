/*===============================================================

    8) Sabe-se:
a) a) 1 p� = 12 polegadas
b) b) 1 jarda = 3 p�s
c) c) 1 milha = 1760 jardas
Elabore um algoritmo que receba a medida em p�s, fa�a as convers�es a seguir e mostre os resultados.
d) Polegadas,
e) Jardas
f) Milhas.

    CURSO: ANALISE E DESENVOLVIMENTO DE SISTEMAS - ADS
    1� PER�ODO - DISCIPLINA DE ALGORITMO E L�GICA DE PROGRAMA��O
    Nome do aluno(a): Felipe Lara Facin
    1 SEMESTRE 2025
    Prof. Ernani Claudio Borges
    data: Mar�o 2025

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

    float pe, pol, jar, mil;

    //INICIALIZAR VARIAVEIS

    pe = 0;
    pol = 0;
    jar = 0;
    mil = 0;

    printf ("\n Informe a medida em pes: ");
    fflush (stdin);
    scanf ("%f", &pe);

    pol = pe * 12.0;

    jar =  pe / 3.0;

    mil = jar / 1760.0;

    system ("cls");

    printf ("\n A medida em polegadas eh: %.2f", pol);
    printf ("\n\n A medida em jardas eh: %.2f", jar);
    printf ("\n\n A medida em milhas eh: %.5f", mil);

    //FINALIZAR PROGRAMA

    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
