#include <stdio.h>

/*
 * Função: conv_litros_para_mililitros
 * ------------------------------
 * Converte um valor de litros para mililitros.
 *
 * Parâmetros:
 *  - valor: valor para converter.
 *  - valor_convertido: valor convertido.
 *
 * Retorno:
 *  - Sem retorno. Imprime a conversão na tela.
 *
 * Observação:
 *  
 */
void conv_litros_para_mililitros(){
    double valor, valor_convertido;

    printf("\a\nDigite o valor a ser convertido: ");
    scanf("%lf", &valor);

    if (valor >= 0)
    {
        valor_convertido = valor * 1000;

        printf("\a\n%.2lf litros equivalem a %.0lf mililitros.\n", valor, valor_convertido);
    }
    else
    {
        printf("\a\nO valor precisa ser um numero positivo.");
    }
    
}

/*
 * Função: conv_mililitros_para_litros
 * ------------------------------
 * Converte um valor de mililitros para litros.
 *
 * Parâmetros:
 *  - valor: valor para converter.
 *  - valor_convertido: valor convertido.
 *
 * Retorno:
 *  - Sem retorno. Imprime a conversão na tela.
 *
 * Observação:
 *  
 */
void conv_mililitros_para_litros(){
    double valor, valor_convertido;

    printf("\a\nDigite o valor a ser convertido: ");
    scanf("%lf", &valor);

    if (valor >= 0)
    {
        valor_convertido = valor / 1000;

        printf("\a\n%.0lf mililitros equivalem a %.2lf litros.\n", valor, valor_convertido);
    }
    else
    {
        printf("\a\nO valor precisa ser um numero positivo.");
    }
    
}

/*
 * Função: conv_metros_cubicos_para_litros
 * ------------------------------
 * Converte um valor de metros cúbicos para litros.
 *
 * Parâmetros:
 *  - valor: valor para converter.
 *  - valor_convertido: valor convertido.
 *
 * Retorno:
 *  - Sem retorno. Imprime a conversão na tela.
 *
 * Observação:
 *  
 */
void conv_metros_cubicos_para_litros(){
    double valor, valor_convertido;

    printf("\a\nDigite o valor a ser convertido: ");
    scanf("%lf", &valor);

    if (valor >= 0)
    {
        valor_convertido = valor * 1000;

        printf("\a\n%.2lf metros cubicos equivalem a %.2lf litros.\n", valor, valor_convertido);
    }
    else
    {
        printf("\a\nO valor precisa ser um numero positivo.");
    }
    
}

/*
 * Função: conv_litros_para_metros_cubicos
 * ------------------------------
 * Converte um valor de litros para metros cúbicos.
 *
 * Parâmetros:
 *  - valor: valor para converter.
 *  - valor_convertido: valor convertido.
 *
 * Retorno:
 *  - Sem retorno. Imprime a conversão na tela.
 *
 * Observação:
 *  
 */
void conv_litros_para_metros_cubicos(){
    double valor, valor_convertido;

    printf("\a\nDigite o valor a ser convertido: ");
    scanf("%lf", &valor);

    if (valor >= 0)
    {
        valor_convertido = valor / 1000;

        printf("\a\n%.2lf litros equivalem a %.2lf metros cubicos.\n", valor, valor_convertido);
    }
    else
    {
        printf("\a\nO valor precisa ser um numero positivo.");
    }
    
}

/*
 * Função: conv_mililitros_para_metros_cubicos
 * ------------------------------
 * Converte um valor de mililitros para metros cúbicos.
 *
 * Parâmetros:
 *  - valor: valor para converter.
 *  - valor_convertido: valor convertido.
 *
 * Retorno:
 *  - Sem retorno. Imprime a conversão na tela.
 *
 * Observação:
 *  
 */
void conv_mililitros_para_metros_cubicos(){
    double valor, valor_convertido;

    printf("\a\nDigite o valor a ser convertido: ");
    scanf("%lf", &valor);

    if (valor >= 0)
    {
        valor_convertido = valor / 1000000;

        printf("\a\n%.0lf mililitros equivalem a %.2lf metros cubicos.\n", valor, valor_convertido);
    }
    else
    {
        printf("\a\nO valor precisa ser um numero positivo.");
    }
    
}

/*
 * Função: conv_metros_cubicos_para_mililitros
 * ------------------------------
 * Converte um valor de metros cúbicos para mililitros.
 *
 * Parâmetros:
 *  - valor: valor para converter.
 *  - valor_convertido: valor convertido.
 *
 * Retorno:
 *  - Sem retorno. Imprime a conversão na tela.
 *
 * Observação:
 *  
 */
void conv_metros_cubicos_para_mililitros(){
    double valor, valor_convertido;

    printf("\a\nDigite o valor a ser convertido: ");
    scanf("%lf", &valor);

    if (valor >= 0)
    {
        valor_convertido = valor * 1000000;

        printf("\a\n%.2lf metros cúbicos equivalem a %.0lf mililitros.\n", valor, valor_convertido);
    }
    else
    {
        printf("\a\nO valor precisa ser um numero positivo.");
    }
    
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















