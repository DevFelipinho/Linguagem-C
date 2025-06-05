#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <windows.h>
#include <time.h>
#include <math.h>
#include <conio.h>
#define tam 1000

// Nome Completo: Felipe Lara Facin
// Curso: Análise e Desenvolvimento de Sistemas
// CPF: 083.100.081-39
// Data: 04/06/2025

//============================================================================
void menu (int *opcao);
void entrada_menu (int *opcao);
void validar_menu (int *opcao);
void receber_dia(int dia[], int *j);
void validar_dia (int dia[], int *j);
void receber_nome_transacao (char nome[][100], int *j);
void validar_nome_transacao (char nome[][100], int *j);
void receber_valor_transacao (float valor[], int *j, int *opcao, float saldo[]);
void validar_valor_transacao (float valor[], int *j, int *opcao, float saldo[]);
void atualizando_sistema (char *loading);

//============================================================================

void menu (int *opcao)
{
    printf ("\n             TRANSACOES BANCARIAS");
    printf ("\n           ========================\n");
    printf ("\n 1) Deposito (entrada)");
    printf ("\n 2) Retiradas (saida)");
    printf ("\n 3) Relatorio saldo atual");
    printf ("\n 4) Relatorio do extrato do periodo do mes");
    printf ("\n 5) Finalizar\n");
    printf ("\n Informe uma das opcoes (1, 2, 3, 4 ou 5): ");

    entrada_menu(&*opcao);
}

void entrada_menu (int *opcao)
{
    fflush (stdin);
    scanf ("%d", &*opcao);

    validar_menu(&*opcao);
}

void validar_menu (int *opcao)
{
    while (*opcao != 1 && *opcao != 2 && *opcao != 3 && *opcao != 4 && *opcao != 5)
    {
        printf ("\n OPCAO INVALIDA, digite novamente: ");
        fflush (stdin);
        scanf ("%d", &*opcao);
    }
}

void receber_dia(int dia[], int *j)
{
    printf ("\n\n Informe o dia da data de hoje: ");
    fflush (stdin);
    scanf ("%d", &dia[*j]);

    validar_dia(dia, &*j);
}

void validar_dia (int dia[], int *j)
{
    if (*j == 0)
    {
        while (dia[*j] < 1 || dia[*j] > 31)
        {
            printf ("\n DIA INVALIDO, informe outro: ");
            fflush (stdin);
            scanf ("%d", &dia[*j]);
        }
    }

    else
    {
        while (dia[*j] < 1 || dia[*j] > 31 || dia[*j] < dia[*j-1])
        {
            printf ("\n DIA INVALIDO, informe outro: ");
            fflush (stdin);
            scanf ("%d", &dia[*j]);
        }
    }

}

void receber_nome_transacao (char nome[][100], int *j)
{
    printf ("\n Informe o nome do tipo de deposito (dinheiro ou pix): ");
    fflush (stdin);
    gets (nome[*j]);

    validar_nome_transacao(nome, &*j);
}

void validar_nome_transacao (char nome[][100], int *j)
{
    while (strcmp (nome[*j], "Dinheiro") != 0 && strcmp (nome[*j], "DINHEIRO") != 0 && strcmp (nome[*j], "dinheiro") != 0  && strcmp (nome[*j], "pix") != 0  && strcmp (nome[*j], "Pix") != 0  && strcmp (nome[*j], "PIX") != 0)
    {
        printf ("\n TIPO INVALIDO, digite novamente: ");
        fflush (stdin);
        gets (nome[*j]);
    }
}

void receber_valor_transacao (float valor[], int *j, int *opcao, float saldo[])
{
    printf ("\n Informe o valor (digite 0 para cancelar a operacao): ");
    fflush(stdin);
    scanf("%f", &valor[*j]);

    validar_valor_transacao(valor, &*j, &*opcao, saldo);
}

void validar_valor_transacao (float valor[], int *j, int *opcao, float saldo[])
{
    if (*opcao == 1)
    {
        while (valor[*j] < 0)
        {
            printf ("\n VALOR INVALIDO, nao pode ser negativo. Digite novamente: ");
            fflush (stdin);
            scanf ("%f", &valor[*j]);
        }
    }

    else if (*opcao == 2)
    {
        while (valor[*j] < 0 || saldo[*j - 1] < valor[*j])
        {
            if (valor[*j] < 0)
                printf ("\n VALOR INVALIDO, nao pode ser negativo. Digite novamente: ");

            else
                printf ("\n VALOR INVALIDO, o saldo eh menor do que o valor da retirada. Digite novamente: ");

            fflush (stdin);
            scanf ("%f", &valor[*j]);
        }
    }

}

void atualizando_sistema (char *loading)
{
    printf ("\n\n             AGUARDE......... ATUALIZANDO SISTEMA\n\n");

    for (int i=0;i<60;i++)
    {
        printf ("%c", *loading);
        Sleep(25);
    }
}

void extrato_completo (int dia[], char nome_transacao[][100], char status[], float valor_transacao[], float saldo[])
{
    printf ("\n\n\n                           EXTRATO COMPLETO");
    printf ("\n                         ====================");
    printf ("\n\n DIA       DESCRICAO       STATUS      VALOR DA TRANSACAO      SALDO ATUAL\n");

    for(int i = 0;i<tam; i++)
        if(valor_transacao[i] != 0)
            printf ("\n %2d         %-8s         %c               %-10.2f         %-10.2f", dia[i], nome_transacao[i], status[i], valor_transacao[i], saldo[i]);
}

//============================================================================

int main()
{

    char nome_transacao[tam][100], status[tam], loading;
    int opcao, i, dia[tam], j;
    float valor_transacao[tam], saldo[tam];

    opcao = 0;
    j = 0;
    loading = 219;

    for(i=0;i<tam;i++)
    {
        strcpy(nome_transacao[i], "");
        status[i] = ' ';
        dia[i] = 0;
        valor_transacao[i] = 0.0;
        saldo[i] = 0.0;
    }

    do
    {
        menu(&opcao);

        system ("cls");

        if (opcao != 5)
        {


            if (opcao == 1)
            {
                status[j] = 'C';

                printf ("\n Opcao 1 - Deposito (entrada)");

                receber_dia(dia, &j);

                receber_nome_transacao(nome_transacao, &j);

                receber_valor_transacao(valor_transacao, &j, &opcao, saldo);

                if (valor_transacao[j] != 0)
                {
                    if (j == 0)
                        saldo[j] = valor_transacao[j];

                    else
                        saldo[j] = saldo[j-1] + valor_transacao[j];

                    atualizando_sistema(&loading);

                    j++;
                }
            }

            else if (opcao == 2)
            {
                if (j == 0 || saldo[j-1] == 0)
                    printf ("\n\n Nao ha nenhum dinheiro na conta, nao eh possivel realizar retiradas.");

                else
                {
                    status[j] = 'D';

                    printf ("\n Opcao 2 - Retiradas (saida)");

                    receber_dia(dia, &j);

                    receber_nome_transacao(nome_transacao, &j);

                    receber_valor_transacao(valor_transacao, &j, &opcao, saldo);

                    if (valor_transacao[j] != 0)
                    {
                        saldo[j] = saldo[j-1] - valor_transacao[j];

                        atualizando_sistema(&loading);

                        j++;
                    }
                }

            }

            else if (opcao == 3)
            {
                printf ("\n Opcao 3 - Relatorio saldo atual");

                if (j == 0)
                    printf ("\n\n\n Saldo atual = R$ 0.0");

                else
                    printf ("\n\n\n Saldo atual = R$ %.2f", saldo[j-1]);
            }

            else if (opcao == 4)
            {
                printf ("\n Opcao 4 - Relatorio do extrato do periodo do mes");

                if (j == 0)
                    printf ("\n\n\n O EXTRATO ESTA VAZIO.");

                else
                    extrato_completo (dia, nome_transacao, status, valor_transacao, saldo);
            }

            printf ("\n\n\n Pressione qualquer tecla para voltar ao menu de transacoes.");
            getch();

            system ("cls");
        }

    }while (opcao != 5);

    system ("cls");

    printf ("\n             Finalizando Programa........\n\n");

        for(i=0; i<60;i++)
        {
            printf ("%c", loading);
            Sleep(25);
        }

    printf ("\n\n\n Muito obrigado, ate mais!\n\n\n\n");



    return 0;
}
