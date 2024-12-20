#include "conv_comprimento.h"

// Implementação dos métodos de conversão

double interface_conv_metro_para_centimetro(double metros) {
    return metros * 100;
}

double interface_conv_metro_para_milimetro(double metros) {
    return metros * 1000;
}

double interface_conv_centimetro_para_metro(double centimetros) {
    return centimetros / 100;
}

double interface_conv_centimetro_para_milimetro(double centimetros) {
    return centimetros * 10;
}

double interface_conv_milimetro_para_centimetro(double milimetros) {
    return milimetros / 10;
}

double interface_conv_milimetro_para_metro(double milimetros) {
    return milimetros / 1000;
}

// Função principal para interagir com o usuário
void interface_conv_comprimento() {
    int opcao;
    double valor, resultado;

    printf("Conversor de Unidades de Comprimento\n");
    printf("Escolha uma opção:\n");
    printf("1 - Metro para Centímetro\n");
    printf("2 - Metro para Milímetro\n");
    printf("3 - Milímetro para Metro\n");
    printf("4 - Milímetro para Centímetro\n");
    printf("5 - Centímetro para Milímetro\n");
    printf("6 - Centímetro para Metro\n");
    scanf("%d", &opcao);

    printf("Informe o valor a ser convertido: ");
    scanf("%lf", &valor);

    switch (opcao) {
        case 1:
            resultado = interface_conv_metro_para_centimetro(valor);
            printf("Resultado: %.2lf centímetros\n", resultado);
            break;
        case 2:
            resultado = interface_conv_metro_para_milimetro(valor);
            printf("Resultado: %.2lf milímetros\n", resultado);
            break;
        case 3:
            resultado = interface_conv_milimetro_para_metro(valor);
            printf("Resultado: %.6lf metros\n", resultado);
            break;
        case 4:
            resultado = interface_conv_milimetro_para_centimetro(valor);
            printf("Resultado: %.2lf centímetros\n", resultado);
            break;
        case 5:
            resultado = interface_conv_centimetro_para_milimetro(valor);
            printf("Resultado: %.2lf milímetros\n", resultado);
            break;
        case 6:
            resultado = interface_conv_centimetro_para_metro(valor);
            printf("Resultado: %.6lf metros\n", resultado);
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }
}

// Função main para executar o programa
int main() {
    interface_conv_comprimento();
    return 0;
}
