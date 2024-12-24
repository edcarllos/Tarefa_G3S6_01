#include <stdio.h>

/*
 * Função: conv_Fahrenheit_Celsius
 * ---------------------------
 * Converte uma temperatura de Fahrenheit para Celsius.
 *
 * Parâmetros:
 *  - valor_f: temperatura em Fahrenheit a ser convertida.
 *
 * Retorno:
 *  - O valor da temperatura convertido para Celsius.
 */

double conv_Fahrenheit_Celsius(double valor_f)
{
    return (valor_f - 32) * 5 / 9.0;
}

/*
 * Função: conv_Fahrenheit_Kelvin
 * ---------------------------
 * Converte uma temperatura de Fahrenheit para Kelvin.
 *
 * Parâmetros:
 *  - valor_f: temperatura em Fahrenheit a ser convertida.
 *
 * Retorno:
 *  - O valor da temperatura convertido para Kelvin.
 */
double conv_Fahrenheit_Kelvin(double valor_f)
{
    return (valor_f - 32) * 5 / 9.0 + 273.15;
}
/*
 * Função: conv_Celsius_Fahrenheit
 * ---------------------------
 * Converte uma temperatura de Celsius para Fahrenheit.
 *
 * Parâmetros:
 *  - valor_c: temperatura em Celsius a ser convertida.
 *
 * Retorno:
 *  - O valor da temperatura convertido para Fahrenheit.
 */
double conv_Celsius_Fahrenheit(double valor_c)
{
    return valor_c * 9 / 5.0 + 32;
}
/*
 * Função: conv_Celsius_Kelvin
 * ---------------------------
 * Converte uma temperatura de Celsius para Kelvin.
 *
 * Parâmetros:
 *  - valor_c: temperatura em Celsius a ser convertida.
 *
 * Retorno:
 *  - O valor da temperatura convertido para Kelvin.
 */
double conv_Celsius_Kelvin(double valor_c)
{
    return valor_c + 273.15;
}
/*
 * Função: conv_Kelvin_Fahrenheit
 * ---------------------------
 * Converte uma temperatura de Kelvin para Fahrenheit.
 *
 * Parâmetros:
 *  - valor_c: temperatura em Kelvin a ser convertida.
 *
 * Retorno:
 *  - O valor da temperatura convertido para Fahrenheit.
 */
double conv_Kelvin_Fahrenheit(double valor_k)
{
    return (valor_k - 273.15) * 9 / 5.0 + 32;
}
/*
 * Função: conv_kelvin_Celsius
 * ---------------------------
 * Converte uma temperatura de Kelvin para Celsius.
 *
 * Parâmetros:
 *  - valor_c: temperatura em Kelvin a ser convertida.
 *
 * Retorno:
 *  - O valor da temperatura convertido para Celsius.
 */
double conv_Kelvin_Celsius(double valor_k)
{
    return valor_k - 273.15;
}
/*
 * Função: interface_conv_volume
 * ------------------------------
 * Menu de interface para escolher a opção de conversão a ser realizada.
 *
 * Parâmetros:
 *  -Sem paramentros de entrada. A entrada é solicitada dentro da função.
 *
 * Retorno:
 *  - não possui retorno.
 *
 * Observação:
 *  - a função  de conversão específica é chamada de acordo com o número de opção escolhido.
 *
 */
void interface_conv_temperatura()
{
    int escolha;
    double temperatura;
    printf("Escolha a conversão:\n");
    printf("1. Fahrenheit para Celsius\n");
    printf("2. Fahrenheit para Kelvin\n");
    printf("3. Celsius para Fahrenheit\n");
    printf("4. Celsius para Kelvin\n");
    printf("5. Kelvin para Fahrenheit\n");
    printf("6. Kelvin para Celsius\n");
    scanf("%d", &escolha);

    printf("Digite a temperatura: ");
    do
    {
        if (escolha == 5 || escolha == 6)
        {
            printf("O valor da temperatura precisa ser positivo:");
        }
        scanf("%lf", &temperatura);

    } while ((escolha == 5 || escolha == 6) && (temperatura < 0));
    switch (escolha)
    {
    case 1:
        printf("%.2f°C\n", conv_Fahrenheit_Celsius(temperatura));
        break;
    case 2:
        printf("%.2fK\n", conv_Fahrenheit_Kelvin(temperatura));
        break;
    case 3:
        printf("%.2f°F\n", conv_Celsius_Fahrenheit(temperatura));
        break;
    case 4:
        printf("%.2fK\n", conv_Celsius_Kelvin(temperatura));
        break;
    case 5:
        printf("%.2f°F\n", conv_Kelvin_Fahrenheit(temperatura));
        break;
    case 6:
        printf("%.2f°C\n", conv_Kelvin_Celsius(temperatura));
        break;
    default:
        printf("Opção inválida!\n");
    }
}
