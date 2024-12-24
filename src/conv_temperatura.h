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

double conv_Fahrenheit_Celsius(double valor_f);

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
double conv_Fahrenheit_Kelvin(double valor_f);
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
double conv_Celsius_Fahrenheit(double valor_c);
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
double conv_Celsius_Kelvin(double valor_c);
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
double conv_Kelvin_Fahrenheit(double valor_k);
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
double conv_kelvin_Celsius(double valor_k);
/*
 * Função: interface_conv_temperatura
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
void interface_conv_temperatura();
