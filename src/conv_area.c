#include "conv_area.h"
#include <stdio.h>
#include <stdlib.h>

float convAreaMparaCM(float valor)
{

    if (valor >= 0)
    {
        return valor * 10000;
    }
    else
    {
        printf("\nNão existe valor negativo para área!");
        exit(EXIT_FAILURE);
    }
}

float convAreaCMparaM(float valor)
{
    if (valor >= 0)
    {
        return valor / 10000;
    }
    else
    {
        printf("\nNão existe valor negativo para área!");
        exit(EXIT_FAILURE);
    }
}

void interface_conv_area()
{
    int opcao;
    printf("\a\nDigite o numero da conversao que deseja fazer:\n");
    printf("\n1 - Metros quadrados para centimetros quadrados");
    printf("\n2 - centimetros quadrados para Metros quadrados");
    printf("\nOpção:  ");
    scanf("%d", &opcao);

    if (opcao == 1)
    {
        float valor;
        printf("\nDigite o valor em metros quadrados: ");
        scanf("%f", &valor);
        printf("\nO valor convertido em centímetros quadrados é %f", convAreaMparaCM(valor));
    }
    else
    {
        if (opcao == 2)
        {
            float valor;
            printf("\nDigite o valor em centímetros quadrados: ");
            scanf("%f", &valor);
            printf("\nO valor convertido em metros quadrados é %f", convAreaCMparaM(valor));
        }
    }
}