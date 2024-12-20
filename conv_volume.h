#include <stdio.h>

//exemplo de comentario para as funções

/*
 * Função: conv_kelvin_fahrenheit
 * ------------------------------
 * Converte uma temperatura de Kelvin para Fahrenheit.
 *
 * Parâmetros:
 *  - valor_k: temperatura em Kelvin a ser convertida.
 *
 * Retorno:
 *  - O valor da temperatura convertido para Fahrenheit.
 *
 * Observação:
 *  - Temperaturas em Kelvin não podem ser negativas. 
 *    A função pode retornar resultados incorretos se um valor inválido for passado.
 */



/*
 * Função: conv_kelvin_fahrenheit
 * ------------------------------
 * Converte uma temperatura de Kelvin para Fahrenheit.
 *
 * Parâmetros:
 *  - valor_k: temperatura em Kelvin a ser convertida.
 *
 * Retorno:
 *  - O valor da temperatura convertido para Fahrenheit.
 *
 * Observação:
 *  - Temperaturas em Kelvin não podem ser negativas. 
 *    A função pode retornar resultados incorretos se um valor inválido for passado.
 */
void conv_litros_para_mililitros(){

}

/*
 * Função: conv_kelvin_fahrenheit
 * ------------------------------
 * Converte uma temperatura de Kelvin para Fahrenheit.
 *
 * Parâmetros:
 *  - valor_k: temperatura em Kelvin a ser convertida.
 *
 * Retorno:
 *  - O valor da temperatura convertido para Fahrenheit.
 *
 * Observação:
 *  - Temperaturas em Kelvin não podem ser negativas. 
 *    A função pode retornar resultados incorretos se um valor inválido for passado.
 */
void conv_mililitros_para_litros(){

}

/*
 * Função: conv_kelvin_fahrenheit
 * ------------------------------
 * Converte uma temperatura de Kelvin para Fahrenheit.
 *
 * Parâmetros:
 *  - valor_k: temperatura em Kelvin a ser convertida.
 *
 * Retorno:
 *  - O valor da temperatura convertido para Fahrenheit.
 *
 * Observação:
 *  - Temperaturas em Kelvin não podem ser negativas. 
 *    A função pode retornar resultados incorretos se um valor inválido for passado.
 */
void conv_metros_cubicos_para_litros(){

}

/*
 * Função: conv_kelvin_fahrenheit
 * ------------------------------
 * Converte uma temperatura de Kelvin para Fahrenheit.
 *
 * Parâmetros:
 *  - valor_k: temperatura em Kelvin a ser convertida.
 *
 * Retorno:
 *  - O valor da temperatura convertido para Fahrenheit.
 *
 * Observação:
 *  - Temperaturas em Kelvin não podem ser negativas. 
 *    A função pode retornar resultados incorretos se um valor inválido for passado.
 */
void conv_litros_para_metros_cubicos(){

}

/*
 * Função: conv_kelvin_fahrenheit
 * ------------------------------
 * Converte uma temperatura de Kelvin para Fahrenheit.
 *
 * Parâmetros:
 *  - valor_k: temperatura em Kelvin a ser convertida.
 *
 * Retorno:
 *  - O valor da temperatura convertido para Fahrenheit.
 *
 * Observação:
 *  - Temperaturas em Kelvin não podem ser negativas. 
 *    A função pode retornar resultados incorretos se um valor inválido for passado.
 */
void conv_mililitros_para_metros_cubicos(){

}

/*
 * Função: conv_kelvin_fahrenheit
 * ------------------------------
 * Converte uma temperatura de Kelvin para Fahrenheit.
 *
 * Parâmetros:
 *  - valor_k: temperatura em Kelvin a ser convertida.
 *
 * Retorno:
 *  - O valor da temperatura convertido para Fahrenheit.
 *
 * Observação:
 *  - Temperaturas em Kelvin não podem ser negativas. 
 *    A função pode retornar resultados incorretos se um valor inválido for passado.
 */
void conv_metros_cubicos_para_mililitros(){

}

/*
 * Função: interface_conv_volume
 * ------------------------------
 * Menu de interface para escolher a opção de conversão a ser realizada.
 *
 * Parâmetros:
 *  - opcao: numero da opção escolhida.
 *
 * Retorno:
 *  - não possui retorno.
 *
 * Observação:
 *  - a função  de conversão específica é chamada de acordo com o número de opção escolhido. 
 *   
 */
void interface_conv_volume(){
    int opcao;

    printf("\nDigite o numero da conversao que deseja fazer:\n");
    printf("1. Litros para mililitros\n");
    printf("2. Mililitros para litros\n");
    printf("3. Metros cubicos para litros\n");
    printf("4. Litros para metros cubicos\n");
    printf("5. Mililitros para metros cubicos\n");
    printf("6. Metros cubicos para mililitros\n");
    scanf("%d", &opcao);


    switch (opcao) {
        case 1:
            conv_litros_para_mililitros();
            break;
        case 2:
            conv_mililitros_para_litros();
            break;
        case 3:
            conv_metros_cubicos_para_litros();
            break;
        case 4:
            conv_litros_para_metros_cubicos();
            break;
        case 5:
            conv_mililitros_para_metros_cubicos();
            break;
        case 6:
            conv_metros_cubicos_para_mililitros();
            break;
        default:
            printf("Opcao invalida.\n");
    }
}















