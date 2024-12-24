#include <stdio.h>
#include "conv_tempo.h"

// Implementação das funções de conversão
double segundos_para_minutos(double segundos)
{
    return segundos / 60.0;
}

double segundos_para_horas(double segundos)
{
    return segundos / 3600.0;
}

double minutos_para_segundos(double minutos)
{
    return minutos * 60.0;
}

double minutos_para_horas(double minutos)
{
    return minutos / 60.0;
}

double horas_para_segundos(double horas)
{
    return horas * 3600.0;
}

double horas_para_minutos(double horas)
{
    return horas * 60.0;
}

// Função principal
void interface_conv_tempo()
{
    int opcao;
    double valor;

    printf("Selecione a Conversao desejada:\n");
    printf("1. Segundos para Minutos\n");
    printf("2. Segundos para Horas\n");
    printf("3. Minutos para Segundos\n");
    printf("4. Minutos para Horas\n");
    printf("5. Horas para Segundos\n");
    printf("6. Horas para Minutos\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Insira o valor em segundos: ");
        scanf("%lf", &valor);
        printf("%.2lf segundos = %.2lf minutos\n", valor, segundos_para_minutos(valor));
        break;
    case 2:
        printf("Insira o valor em segundos: ");
        scanf("%lf", &valor);
        printf("%.2lf segundos = %.2lf horas\n", valor, segundos_para_horas(valor));
        break;
    case 3:
        printf("Insira o valor em minutos: ");
        scanf("%lf", &valor);
        printf("%.2lf minutos = %.2lf segundos\n", valor, minutos_para_segundos(valor));
        break;
    case 4:
        printf("Insira o valor em minutos: ");
        scanf("%lf", &valor);
        printf("%.2lf minutos = %.2lf horas\n", valor, minutos_para_horas(valor));
        break;
    case 5:
        printf("Insira o valor em horas: ");
        scanf("%lf", &valor);
        printf("%.2lf horas = %.2lf segundos\n", valor, horas_para_segundos(valor));
        break;
    case 6:
        printf("Insira o valor em horas: ");
        scanf("%lf", &valor);
        printf("%.2lf horas = %.2lf minutos\n", valor, horas_para_minutos(valor));
        break;
    default:
        printf("Opcao invalida!\n");
    }
}
