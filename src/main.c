#include "conv_volume.h"
#include "conv_volume.c"
#include "conv_temperatura.h"
#include "conv_temperatura.c"

int main()
{
    interface_conv_volume();
    interface_conv_temperatura();

    /* int tipoDeConversao;

      printf("\a\nDigite o numero referente ao tipo de conversao que deseja fazer:\n");
      printf("1. Conversao de comprimento\n");
      printf("2. Conversao de massa\n");
      printf("3. Conversao de volume\n");
      printf("4. Conversao de temperatura \n");
      printf("5. Conversao de velocidade\n");
      printf("6. Conversao de potencia\n");
      printf("7. Conversao de area\n");
      printf("8. Conversao de tempo\n");
      printf("9. Conversao de medidas de armazenamento\n");
      scanf("%d", &tipoDeConversao);

      switch (tipoDeConversao)
      {
      case 1:
          // interface_conv_...();
          break;
      case 2:
          // interface_conv_...();
          break;
      case 3:
          interface_conv_volume();
          break;
      case 4:
          interface_conv_temperatura();
          break;
      case 5:
          // interface_conv_...();
          break;
      case 6:
          // interface_conv_...();
          break;
      case 7:
          // interface_conv_...();
          break;
      case 8:
          // interface_conv_...();
          break;
      case 9:
          // interface_conv_...();
          break;
      default:
          printf("Opcao invalida.\n");
      }
  */
    return 0;
}