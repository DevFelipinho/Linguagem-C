/*===============================================================

    Lista03_funcoes_Ex01 - Você foi contratado para resolver um problema em uma vidraçaria, a qual
    comercializa a venda de seus vidros considerando sempre unidades múltiplas de 5 milímetros. Ou seja,
    se o cliente quer comprar um vidro de 13mm por 172 mm, será cobrado um valor referente a 15mm por
    175mm. Então veja que o ajuste é feito sempre para o próximo múltiplo de 5.
    Será recebido uma série de orçamentos, onde cada um contém várias medidas de vidro. Assim, elabore
    um algoritmo que processe e apresente o valor a pagar de uma lista de clientes.
    Faça um laço que solicite para cada item do orçamento:
    - o valor do mm2
     de vidro (não pode ser negativo e zero encerra o orçamento)
    - a largura (não pode ser negativa ou nulo)
    - o comprimento (não pode ser negativo ou nulo)
    Processe e calcule, para cada item:
     o valor a ser pago pelo vidro considerando a regra de ajuste para as medidas (os
    valores tem que ser múltiplos de 5 sempre para cima – conforme citado
    anteriormente):
    Pagar = (largura ajustada x comprimento ajustado) x valor do mm2
     apresente quantos orçamentos foram calculados;
     o valor total dos orçamentos sem o reajuste;
     o valor total dos orçamentos reajustado;
     o maior e menor valor de orçamento ajustado encontrado e bem como suas
    medidas ajustadas.
    Obs:
    a) Criar UMA função para entrada de dados e dentro desta, chamar a função validar;
    b) Criar UMA ÚNICA função para validar as entradas de dados (largura, comprimento e preço mm2
    do vidro) para serem maior que zero;
    c) Criar UMA ÚNICA função para fazer o ajuste da largura e do comprimento para múltiplos de 5;
    d) Criar UMA função para o cálculo do valor a pagar;
    Dentro do CÓDIGO PRINCIPAL deverá ter:
     a opção para o usuário executar novamente com outros valores;
     a chamada da entrada de dados;
     a chamada do cálculo de ajuste das medidas;
     a chamada para o cálculo do valor a pagar ajustado
     a amostragem dos valores a pagar.

    CURSO: ANALISE E DESENVOLVIMENTO DE SISTEMAS - ADS
    1º PERÍODO - DISCIPLINA DE ALGORITMO E LÓGICA DE PROGRAMAÇÃO
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
float entrada(float x);
float validar(float x);
char entradac(char x);
char validarc(char x);
void ajuste(float *larg, float *largA, float *comp, float *compA);
void conta(float *larg, float *largA, float *comp, float *compA, float *preco, float *precoA, float *mm);


//===============================================================
//============== LOCAL PARA CRIAR OS MÓDULOS DE FUNÇÕES =========
//===============================================================
float entrada(float x)
{
    fflush (stdin);
    scanf ("%f", &x);

    x = validar(x);

    return (x);
}
//===============================================================
float validar(float x)
{
    while (x<=0)
    {
        printf ("\n Valor invalido, precisa ser positivo, digite novamente: ");
        fflush (stdin);
        scanf ("%f", &x);
    }

    return (x);
}
//===============================================================
void ajuste(float *larg, float *largA, float *comp, float *compA)
{
    while (*largA<*larg)
    {
        *largA+=5;
    }

    while (*compA<*comp)
    {
        *compA+=5;
    }
}
//===============================================================
void conta(float *larg, float *largA, float *comp, float *compA, float *preco, float *precoA, float *mm)
{
    *preco = *larg * *comp * *mm;
    *precoA = *largA * *compA * *mm;
}
//===============================================================
char entradac(char x)
{
    fflush (stdin);
    scanf ("%c", &x);

    x = validarc(x);

    return (x);
}
//===============================================================
char validarc(char x)
{
    while (x != 'S' && x != 's' && x != 'N' && x != 'n')
    {
        printf ("\n Escolha invalida, digite novamente: ");
        fflush (stdin);
        scanf ("%c", &x);
    }

    return (x);
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

    float mm, larg, comp, largA, compA, preco, precoA, quanto, total, totalA, maprecoA, meprecoA, malargA, melargA, macompA, mecompA;
    char escof, esco;

    //INICIALIZAR VARIAVEIS

    mm = 0;
    escof = ' ';
    esco = ' ';
    comp = 0;
    larg = 0;
    largA = 0;
    compA = 0;
    preco = 0;
    precoA = 0;
    quanto =  0;
    total = 0;
    totalA = 0;
    maprecoA = 0;
    meprecoA = 0;
    malargA = 0;
    melargA = 0;
    macompA = 0;
    mecompA = 0;

    while (escof != 'n' && escof != 'N')
    {
        printf ("\n                          Orcamento de vidros");
        printf ("\n");
        printf ("\n Informe o valor do milimetro quadrado do vidro (precisa ser um valor positivo): ");

        mm = entrada(mm);

        while (esco != 'n' && esco != 'N')
        {
            printf ("\n Informe a largura do vidro (precisa ser positivo): ");

            larg = entrada(larg);

            printf ("\n Informe o comprimento do vidro (precisa ser positivo): ");

            comp = entrada(comp);

            ajuste(&larg, &largA, &comp, &compA);

            conta(&larg, &largA, &comp, &compA, &preco, &precoA, &mm);

            quanto++;

            total+=preco;

            totalA+=precoA;

            if (quanto ==  1)
            {
                maprecoA = precoA;
                meprecoA = precoA;
                malargA = largA;
                melargA = largA;
                macompA = compA;
                mecompA = compA;
            }

            if (maprecoA<precoA)
            {
                maprecoA = precoA;
                malargA = largA;
                macompA = compA;
            }

            if (meprecoA>precoA)
            {
                meprecoA = precoA;
                melargA = largA;
                mecompA = compA;

            }

            largA = 0;
            compA = 0;

            printf ("\n Deseja adicionar outro vidro ao orcamento (<<s>> para sim e <<n>> para nao)? ");

            esco = entradac(esco);
        }

        esco = ' ';

        system ("cls");

        printf ("\n                      Orcamento finalizado");
        printf ("\n");
        printf ("\n Quantidade de orcamentos calculados: %.0f", quanto);
        printf ("\n");
        printf ("\n Valor total dos orcamentos sem o reajuste: %.2f", total);
        printf ("\n");
        printf ("\n Valor total dos orcamentos reajustados: %.2f", totalA);
        printf ("\n");
        printf ("\n Maior valor reajustado: %.2f * %.2f * %.2f = %.2f", malargA, macompA, mm, maprecoA);
        printf ("\n");
        printf ("\n Menor valor reajustado: %.2f * %.2f * %.2f = %.2f", melargA, mecompA, mm, meprecoA);

        printf ("\n\n\n\n Deseja executar novamente com outros valores (<<s>> para sim e <<n>> para nao)? ");

        escof = entradac(escof);

        system ("cls");
    }



    //FINALIZAR PROGRAMA

    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
