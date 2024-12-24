#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "conv_temperatura.h"
#include "conv_volume.h"
#include "conv_tempo.h"
#include "conv_massa.h"

/*
 * Função: Interface do Usuário
 * ------------------------------
 * Mostra um menu para que ele escolha qual conversão deseja fazer
 *
 * Parâmetros:
 *  - Sem parâmetros de entrada. A entrada é solicitada dentro da função.
 *
 * Retorno:
 *  - Sem retorno.
 *
 */

int main(void)
{
    int tam = 0, opcao = 0;
    char opcao1[50];

    setlocale(LC_ALL, "Portuguese");

    // Apresentação e execução do menu.
    do
    {
        printf("\n ***********************************************************************************************************************\n");
        printf("\t\t\t\t\t\t\t MENU ");
        printf("\n ***********************************************************************************************************************\n");
        printf("\n\nPor favor, escolha qual conversão deseja fazer, entre as opções abaixo: \n\n");
        printf("  (1) - Metro, centímetro e milímetro.\n"
               "  (2) - Quilograma, grama e tonelada.\n"
               "  (3) - Litro, mililitro e metros cúbicos.\n"
               "  (4) - Celsius, Fahrenheit e Kelvin.\n"
               "  (5) - Km/h, m/s e mph.\n"
               "  (6) - Watts (W), quilowatts (kW) e cavalos-vapor (cv ou hp).\n"
               "  (7) - Metro quadrado e centímetro quadrado.\n"
               "  (8) - Segundos, minutos e horas.\n"
               "  (9) - Bits, bytes, kilobytes (KB), megabytes (MB), gigabytes (GB) e terabytes (TB).\n"
               "  (0) - Sair.\n\n-> ");
        scanf("%[^\n]", opcao1);
        scanf("%*c");

        do
        {
            for (tam = 0; opcao1[tam] != '\0'; tam++)
                ; // Conta a quantidade de caracteres digigitados.

            // Valida se o que foi digitado está dentro das opções disponíveis para o menu.
            if (tam > 1)
            { // Testa se o tamanho da stirng é maior que um, se for retorna como inválido, pois nenhum valor do menu tem mais de um caracter.
                printf("\n ***********************************************************************************************************************\n");
                printf("\t\t\t\t\tOPÇÃO INVÁLIDA! Por favor, escolha novamente. ");
                printf("\n ***********************************************************************************************************************\n"
                       "\n -> ");
                scanf("%[^\n]", opcao1);
                scanf("%*c");
            }
            else if (opcao1[0] < '0' || opcao1[0] > '8')
            { // Caso não seja maior que um, testa também se está em um intervalo válido para o menu, de 0 a 9.
                printf("\n ***********************************************************************************************************************\n");
                printf("\t\t\t\t\tOPÇÃO INVÁLIDA! Por favor, escolha novamente. ");
                printf("\n ***********************************************************************************************************************\n"
                       "\n -> ");
                scanf("%[^\n]", opcao1);
                scanf("%*c");
            }
        } while (tam != 1);

        printf("\n ---> Pressione ENTER para continuar...");
        scanf("%*c");
        system("clear || cls"); // Limpa a tela.

        opcao = opcao1[0] - 48;

        switch (opcao)
        {
        // Sair.
        case 0:
            printf("\n ******************************** Fim da execução. Obrigada por utiliar o programa! ;) *********************************\n");
            break;

        // Conversão entre: Metro, centímetro e milímetro.
        case 1:
            // TODO: Implementar
            // interface_conv_comprimento();

            // Menu para o usuário escolher se quer sair a partir daqui ou se deseja voltar para o menu.
            printf("\nO que você deseja? \n"
                   "\t\n 0 - Sair."
                   "\t\n 1 - Voltar para o menu."
                   "\t\n\n -> ");
            scanf("%[^\n]", opcao1);
            scanf("%*c");

            // Valida se o que foi digitado está entre as opções disponíveis.
            do
            {
                for (tam = 0; opcao1[tam] != '\0'; tam++)
                    ; // Conta a quantidade de caracteres digigitados.

                // Valida se o que foi digitado está dentro das opções disponíveis para o menu.
                if (tam > 1)
                { // Testa se o tamanho da stirng é maior que um, se for retorna como inválido, pois nenhum valor no menu tem mais de um caracter.
                    printf("\n ***********************************************************************************************************************\n");
                    printf("\t\t\t\t\tOPÇÃO INVÁLIDA! Por favor, escolha novamente. ");
                    printf("\n ***********************************************************************************************************************\n"
                           "\n -> ");
                    scanf("%[^\n]", opcao1);
                    scanf("%*c");
                }
                else if (opcao1[0] < '0' || opcao1[0] > '1')
                { // Caso não seja maior que um, testa também se está em um intervalo válido para este menu, de 0 a 1.
                    printf("\n ***********************************************************************************************************************\n");
                    printf("\t\t\t\t\tOPÇÃO INVÁLIDA! Por favor, escolha novamente. ");
                    printf("\n ***********************************************************************************************************************\n"
                           "\n -> ");
                    scanf("%[^\n]", opcao1);
                    scanf("%*c");
                }
            } while (tam != 1);

            // Se o usuário escolher sair.
            if (opcao1[0] == '0')
            {
                printf("\nFim da execução. Obrigada por utiliar o programa! ;) \n");
                opcao = 0;
                break;
            }

            // Se o usuário decidir voltar para o menu.
            printf("\n ---> Pressione ENTER para continuar...");
            scanf("%*c");
            system("clear || cls"); // Limpa a tela.
            break;

        // Conversão entre: Quilograma, grama e tonelada.
        case 2:
            interface_conv_massa();

            // Menu para o usuário escolher se quer sair a partir daqui ou se deseja voltar para o menu.
            printf("\nO que você deseja? \n"
                   "\t\n 0 - Sair."
                   "\t\n 1 - Voltar para o menu."
                   "\t\n\n -> ");
            scanf("%[^\n]", opcao1);
            scanf("%*c");

            // Valida se o que foi digitado está entre as opções disponíveis.
            do
            {
                for (tam = 0; opcao1[tam] != '\0'; tam++)
                    ; // Conta a quantidade de caracteres digigitados.

                // Valida se o que foi digitado está dentro das opções disponíveis para o menu.
                if (tam > 1)
                { // Testa se o tamanho da stirng é maior que um, se for retorna como inválido, pois nenhum valor no menu tem mais de um caracter.
                    printf("\n ***********************************************************************************************************************\n");
                    printf("\t\t\t\t\tOPÇÃO INVÁLIDA! Por favor, escolha novamente. ");
                    printf("\n ***********************************************************************************************************************\n"
                           "\n -> ");
                    scanf("%[^\n]", opcao1);
                    scanf("%*c");
                }
                else if (opcao1[0] < '0' || opcao1[0] > '1')
                { // Caso não seja maior que um, testa também se está em um intervalo válido para este menu, de 0 a 1.
                    printf("\n ***********************************************************************************************************************\n");
                    printf("\t\t\t\t\tOPÇÃO INVÁLIDA! Por favor, escolha novamente. ");
                    printf("\n ***********************************************************************************************************************\n"
                           "\n -> ");
                    scanf("%[^\n]", opcao1);
                    scanf("%*c");
                }
            } while (tam != 1);

            // Se o usuário escolher sair.
            if (opcao1[0] == '0')
            {
                printf("\nFim da execução. Obrigada por utiliar o programa! ;) \n");
                opcao = 0;
                break;
            }

            // Se o usuário decidir voltar para o menu.
            printf("\n ---> Pressione ENTER para continuar...");
            scanf("%*c");
            system("clear || cls"); // Limpa a tela.
            break;

        // Conversão entre: Litro, mililitro e metros cúbicos.
        case 3:
            interface_conv_volume();

            // Menu para o usuário escolher se quer sair a partir daqui ou se deseja voltar para o menu.
            printf("\nO que você deseja? \n"
                   "\t\n 0 - Sair."
                   "\t\n 1 - Voltar para o menu."
                   "\t\n\n -> ");
            scanf("%[^\n]", opcao1);
            scanf("%*c");

            // Valida se o que foi digitado está entre as opções disponíveis.
            do
            {
                for (tam = 0; opcao1[tam] != '\0'; tam++)
                    ; // Conta a quantidade de caracteres digigitados.

                // Valida se o que foi digitado está dentro das opções disponíveis para o menu.
                if (tam > 1)
                { // Testa se o tamanho da stirng é maior que um, se for retorna como inválido, pois nenhum valor no menu tem mais de um caracter.
                    printf("\n ***********************************************************************************************************************\n");
                    printf("\t\t\t\t\tOPÇÃO INVÁLIDA! Por favor, escolha novamente. ");
                    printf("\n ***********************************************************************************************************************\n"
                           "\n -> ");
                    scanf("%[^\n]", opcao1);
                    scanf("%*c");
                }
                else if (opcao1[0] < '0' || opcao1[0] > '1')
                { // Caso não seja maior que um, testa também se está em um intervalo válido para este menu, de 0 a 1.
                    printf("\n ***********************************************************************************************************************\n");
                    printf("\t\t\t\t\tOPÇÃO INVÁLIDA! Por favor, escolha novamente. ");
                    printf("\n ***********************************************************************************************************************\n"
                           "\n -> ");
                    scanf("%[^\n]", opcao1);
                    scanf("%*c");
                }
            } while (tam != 1);

            // Se o usuário escolher sair.
            if (opcao1[0] == '0')
            {
                printf("\nFim da execução. Obrigada por utiliar o programa! ;) \n");
                opcao = 0;
                break;
            }

            // Se o usuário decidir voltar para o menu.
            printf("\n ---> Pressione ENTER para continuar...");
            scanf("%*c");
            system("clear || cls"); // Limpa a tela.
            break;

        // Conversão entre: Celsius, Fahrenheit e Kelvin.
        case 4:
            interface_conv_temperatura();

            // Menu para o usuário escolher se quer sair a partir daqui ou se deseja voltar para o menu.
            printf("\nO que você deseja? \n"
                   "\t\n 0 - Sair."
                   "\t\n 1 - Voltar para o menu."
                   "\t\n\n -> ");
            scanf("%[^\n]", opcao1);
            scanf("%*c");

            // Valida se o que foi digitado está entre as opções disponíveis.
            do
            {
                for (tam = 0; opcao1[tam] != '\0'; tam++)
                    ; // Conta a quantidade de caracteres digigitados.

                // Valida se o que foi digitado está dentro das opções disponíveis para o menu.
                if (tam > 1)
                { // Testa se o tamanho da stirng é maior que um, se for retorna como inválido, pois nenhum valor no menu tem mais de um caracter.
                    printf("\n ***********************************************************************************************************************\n");
                    printf("\t\t\t\t\tOPÇÃO INVÁLIDA! Por favor, escolha novamente. ");
                    printf("\n ***********************************************************************************************************************\n"
                           "\n -> ");
                    scanf("%[^\n]", opcao1);
                    scanf("%*c");
                }
                else if (opcao1[0] < '0' || opcao1[0] > '1')
                { // Caso não seja maior que um, testa também se está em um intervalo válido para este menu, de 0 a 1.
                    printf("\n ***********************************************************************************************************************\n");
                    printf("\t\t\t\t\tOPÇÃO INVÁLIDA! Por favor, escolha novamente. ");
                    printf("\n ***********************************************************************************************************************\n"
                           "\n -> ");
                    scanf("%[^\n]", opcao1);
                    scanf("%*c");
                }
            } while (tam != 1);

            // Se o usuário escolher sair.
            if (opcao1[0] == '0')
            {
                printf("\nFim da execução. Obrigada por utiliar o programa! ;) \n");
                opcao = 0;
                break;
            }

            // Se o usuário decidir voltar para o menu.
            printf("\n ---> Pressione ENTER para continuar...");
            scanf("%*c");
            system("clear || cls"); // Limpa a tela.
            break;

        // Conversão entre: Km/h, m/s e mph.
        case 5:
            // TODO: Implementar
            // interface_conv_velocidade();

            // Menu para o usuário escolher se quer sair a partir daqui ou se deseja voltar para o menu.
            printf("\nO que você deseja? \n"
                   "\t\n 0 - Sair."
                   "\t\n 1 - Voltar para o menu."
                   "\t\n\n -> ");
            scanf("%[^\n]", opcao1);
            scanf("%*c");

            // Valida se o que foi digitado está entre as opções disponíveis.
            do
            {
                for (tam = 0; opcao1[tam] != '\0'; tam++)
                    ; // Conta a quantidade de caracteres digigitados.

                // Valida se o que foi digitado está dentro das opções disponíveis para o menu.
                if (tam > 1)
                { // Testa se o tamanho da stirng é maior que um, se for retorna como inválido, pois nenhum valor no menu tem mais de um caracter.
                    printf("\n ***********************************************************************************************************************\n");
                    printf("\t\t\t\t\tOPÇÃO INVÁLIDA! Por favor, escolha novamente. ");
                    printf("\n ***********************************************************************************************************************\n"
                           "\n -> ");
                    scanf("%[^\n]", opcao1);
                    scanf("%*c");
                }
                else if (opcao1[0] < '0' || opcao1[0] > '1')
                { // Caso não seja maior que um, testa também se está em um intervalo válido para este menu, de 0 a 1.
                    printf("\n ***********************************************************************************************************************\n");
                    printf("\t\t\t\t\tOPÇÃO INVÁLIDA! Por favor, escolha novamente. ");
                    printf("\n ***********************************************************************************************************************\n"
                           "\n -> ");
                    scanf("%[^\n]", opcao1);
                    scanf("%*c");
                }
            } while (tam != 1);

            // Se o usuário escolher sair.
            if (opcao1[0] == '0')
            {
                printf("\nFim da execução. Obrigada por utiliar o programa! ;) \n");
                opcao = 0;
                break;
            }

            // Se o usuário decidir voltar para o menu.
            printf("\n ---> Pressione ENTER para continuar...");
            scanf("%*c");
            system("clear || cls"); // Limpa a tela.
            break;

        // Conversão entre: Watts (W), quilowatts (kW) e cavalos-vapor (cv ou hp).
        case 6:
            // TODO: Implementar
            // interface_conv_potencia();

            // Menu para o usuário escolher se quer sair a partir daqui ou se deseja voltar para o menu.
            printf("\nO que você deseja? \n"
                   "\t\n 0 - Sair."
                   "\t\n 1 - Voltar para o menu."
                   "\t\n\n -> ");
            scanf("%[^\n]", opcao1);
            scanf("%*c");

            // Valida se o que foi digitado está entre as opções disponíveis.
            do
            {
                for (tam = 0; opcao1[tam] != '\0'; tam++)
                    ; // Conta a quantidade de caracteres digigitados.

                // Valida se o que foi digitado está dentro das opções disponíveis para o menu.
                if (tam > 1)
                { // Testa se o tamanho da stirng é maior que um, se for retorna como inválido, pois nenhum valor no menu tem mais de um caracter.
                    printf("\n ***********************************************************************************************************************\n");
                    printf("\t\t\t\t\tOPÇÃO INVÁLIDA! Por favor, escolha novamente. ");
                    printf("\n ***********************************************************************************************************************\n"
                           "\n -> ");
                    scanf("%[^\n]", opcao1);
                    scanf("%*c");
                }
                else if (opcao1[0] < '0' || opcao1[0] > '1')
                { // Caso não seja maior que um, testa também se está em um intervalo válido para este menu, de 0 a 1.
                    printf("\n ***********************************************************************************************************************\n");
                    printf("\t\t\t\t\tOPÇÃO INVÁLIDA! Por favor, escolha novamente. ");
                    printf("\n ***********************************************************************************************************************\n"
                           "\n -> ");
                    scanf("%[^\n]", opcao1);
                    scanf("%*c");
                }
            } while (tam != 1);

            // Se o usuário escolher sair.
            if (opcao1[0] == '0')
            {
                printf("\nFim da execução. Obrigada por utiliar o programa! ;) \n");
                opcao = 0;
                break;
            }

            // Se o usuário decidir voltar para o menu.
            printf("\n ---> Pressione ENTER para continuar...");
            scanf("%*c");
            system("clear || cls"); // Limpa a tela.
            break;

        // Conversão entre: Metro quadrado e centímetro quadrado.
        case 7:
            // TODO: Implementar
            // interface_conv_area();

            // Menu para o usuário escolher se quer sair a partir daqui ou se deseja voltar para o menu.
            printf("\nO que você deseja? \n"
                   "\t\n 0 - Sair."
                   "\t\n 1 - Voltar para o menu."
                   "\t\n\n -> ");
            scanf("%[^\n]", opcao1);
            scanf("%*c");

            // Valida se o que foi digitado está entre as opções disponíveis.
            do
            {
                for (tam = 0; opcao1[tam] != '\0'; tam++)
                    ; // Conta a quantidade de caracteres digigitados.

                // Valida se o que foi digitado está dentro das opções disponíveis para o menu.
                if (tam > 1)
                { // Testa se o tamanho da stirng é maior que um, se for retorna como inválido, pois nenhum valor no menu tem mais de um caracter.
                    printf("\n ***********************************************************************************************************************\n");
                    printf("\t\t\t\t\tOPÇÃO INVÁLIDA! Por favor, escolha novamente. ");
                    printf("\n ***********************************************************************************************************************\n"
                           "\n -> ");
                    scanf("%[^\n]", opcao1);
                    scanf("%*c");
                }
                else if (opcao1[0] < '0' || opcao1[0] > '1')
                { // Caso não seja maior que um, testa também se está em um intervalo válido para este menu, de 0 a 1.
                    printf("\n ***********************************************************************************************************************\n");
                    printf("\t\t\t\t\tOPÇÃO INVÁLIDA! Por favor, escolha novamente. ");
                    printf("\n ***********************************************************************************************************************\n"
                           "\n -> ");
                    scanf("%[^\n]", opcao1);
                    scanf("%*c");
                }
            } while (tam != 1);

            // Se o usuário escolher sair.
            if (opcao1[0] == '0')
            {
                printf("\nFim da execução. Obrigada por utiliar o programa! ;) \n");
                opcao = 0;
                break;
            }

            // Se o usuário decidir voltar para o menu.
            printf("\n ---> Pressione ENTER para continuar...");
            scanf("%*c");
            system("clear || cls"); // Limpa a tela.
            break;

        // Conversão entre: Segundos, minutos e horas.
        case 8:
            interface_conv_tempo();

            // Menu para o usuário escolher se quer sair a partir daqui ou se deseja voltar para o menu.
            printf("\nO que você deseja? \n"
                   "\t\n 0 - Sair."
                   "\t\n 1 - Voltar para o menu."
                   "\t\n\n -> ");
            scanf("%[^\n]", opcao1);
            scanf("%*c");

            // Valida se o que foi digitado está entre as opções disponíveis.
            do
            {
                for (tam = 0; opcao1[tam] != '\0'; tam++)
                    ; // Conta a quantidade de caracteres digigitados.

                // Valida se o que foi digitado está dentro das opções disponíveis para o menu.
                if (tam > 1)
                { // Testa se o tamanho da stirng é maior que um, se for retorna como inválido, pois nenhum valor no menu tem mais de um caracter.
                    printf("\n ***********************************************************************************************************************\n");
                    printf("\t\t\t\t\tOPÇÃO INVÁLIDA! Por favor, escolha novamente. ");
                    printf("\n ***********************************************************************************************************************\n"
                           "\n -> ");
                    scanf("%[^\n]", opcao1);
                    scanf("%*c");
                }
                else if (opcao1[0] < '0' || opcao1[0] > '1')
                { // Caso não seja maior que um, testa também se está em um intervalo válido para este menu, de 0 a 1.
                    printf("\n ***********************************************************************************************************************\n");
                    printf("\t\t\t\t\tOPÇÃO INVÁLIDA! Por favor, escolha novamente. ");
                    printf("\n ***********************************************************************************************************************\n"
                           "\n -> ");
                    scanf("%[^\n]", opcao1);
                    scanf("%*c");
                }
            } while (tam != 1);

            // Se o usuário escolher sair.
            if (opcao1[0] == '0')
            {
                printf("\nFim da execução. Obrigada por utiliar o programa! ;) \n");
                opcao = 0;
                break;
            }

            // Se o usuário decidir voltar para o menu.
            printf("\n ---> Pressione ENTER para continuar...");
            scanf("%*c");
            system("clear || cls"); // Limpa a tela.
            break;

        // Conversão entre: Bits, bytes, kilobytes (KB), megabytes (MB), gigabytes (GB) e terabytes (TB).
        case 9:
            // TODO: Implementar
            // interface_conv_armazenamento();

            // Menu para o usuário escolher se quer sair a partir daqui ou se deseja voltar para o menu.
            printf("\nO que você deseja? \n"
                   "\t\n 0 - Sair."
                   "\t\n 1 - Voltar para o menu."
                   "\t\n\n -> ");
            scanf("%[^\n]", opcao1);
            scanf("%*c");

            // Valida se o que foi digitado está entre as opções disponíveis.
            do
            {
                for (tam = 0; opcao1[tam] != '\0'; tam++)
                    ; // Conta a quantidade de caracteres digigitados.

                // Valida se o que foi digitado está dentro das opções disponíveis para o menu.
                if (tam > 1)
                { // Testa se o tamanho da stirng é maior que um, se for retorna como inválido, pois nenhum valor no menu tem mais de um caracter.
                    printf("\n ***********************************************************************************************************************\n");
                    printf("\t\t\t\t\tOPÇÃO INVÁLIDA! Por favor, escolha novamente. ");
                    printf("\n ***********************************************************************************************************************\n"
                           "\n -> ");
                    scanf("%[^\n]", opcao1);
                    scanf("%*c");
                }
                else if (opcao1[0] < '0' || opcao1[0] > '1')
                { // Caso não seja maior que um, testa também se está em um intervalo válido para este menu, de 0 a 1.
                    printf("\n ***********************************************************************************************************************\n");
                    printf("\t\t\t\t\tOPÇÃO INVÁLIDA! Por favor, escolha novamente. ");
                    printf("\n ***********************************************************************************************************************\n"
                           "\n -> ");
                    scanf("%[^\n]", opcao1);
                    scanf("%*c");
                }
            } while (tam != 1);

            // Se o usuário escolher sair.
            if (opcao1[0] == '0')
            {
                printf("\nFim da execução. Obrigada por utiliar o programa! ;) \n");
                opcao = 0;
                break;
            }

            // Se o usuário decidir voltar para o menu.
            printf("\n ---> Pressione ENTER para continuar...");
            scanf("%*c");
            system("clear || cls"); // Limpa a tela.
            break;
        }
    } while (opcao != 0);

    return 0;
}
