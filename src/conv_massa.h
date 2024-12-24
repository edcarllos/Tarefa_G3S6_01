#include<stdio.h>


/*
 * Função: interface_conv_massa
 * ------------------------------
 * Exibi menu para que o usuário entre com o valor a ser convertido, e também qual a unidade desejada de saída
 *
 * Parâmetros:
 *  - nenhum
 *
 * Retorno:
 *  - nenhum
 *
 */
void interface_conv_massa();



/*
 * Função: conv_grama_para_quilo
 * ------------------------------
 * Converte uma massa de grama para quilo.
 *
 * Parâmetros:
 *  - g: massa em gramas a ser convertida.
 *
 * Retorno:
 *  - O valor da massa convertido para quilos.
 *
 * Observação:
 *  - Os valores de massa não podem ser negativas. 
 *    A função pode retornar resultados incorretos se um valor inválido for passado.
 */
double conv_grama_para_quilo(double g);



/*
 * Função: conv_quilo_para_grama
 * ------------------------------
 * Converte uma massa de quilo para grama.
 *
 * Parâmetros:
 *  - q: massa em quilos a ser convertida.
 *
 * Retorno:
 *  - O valor da massa convertido para grama.
 *
 * Observação:
 *  - Os valores de massa não podem ser negativas. 
 *    A função pode retornar resultados incorretos se um valor inválido for passado.
 */
double conv_quilo_para_grama(double q);



/*
 * Função: conv_quilo_para_tonelada
 * ------------------------------
 * Converte uma massa de quilo para tonelada.
 *
 * Parâmetros:
 *  - q: massa em quilos a ser convertida.
 *
 * Retorno:
 *  - O valor da massa convertido para tonelada.
 *
 * Observação:
 *  - Os valores de massa não podem ser negativas. 
 *    A função pode retornar resultados incorretos se um valor inválido for passado.
 */
double conv_quilo_para_tonelada(double q);



/*
 * Função: conv_tonelada_para_quilo
 * ------------------------------
 * Converte uma massa de tonelada para quilo.
 *
 * Parâmetros:
 *  - t: massa em tonelada a ser convertida.
 *
 * Retorno:
 *  - O valor da massa convertido para quilo.
 *
 * Observação:
 *  - Os valores de massa não podem ser negativas. 
 *    A função pode retornar resultados incorretos se um valor inválido for passado.
 */
double conv_tonelada_para_quilo(double t);



/*
 * Função: conv_grama_para_tonelada
 * ------------------------------
 * Converte uma massa de grama para tonelada.
 *
 * Parâmetros:
 *  - g: massa em grama a ser convertida.
 *
 * Retorno:
 *  - O valor da massa convertido para tonelada.
 *
 * Observação:
 *  - Os valores de massa não podem ser negativas. 
 *    A função pode retornar resultados incorretos se um valor inválido for passado.
 */
double conv_grama_para_tonelada(double g);



/*
 * Função: conv_tonelada_para_grama
 * ------------------------------
 * Converte uma massa de tonelada para grama.
 *
 * Parâmetros:
 *  - t: massa em tonelada a ser convertida.
 *
 * Retorno:
 *  - O valor da massa convertido para grama.
 *
 * Observação:
 *  - Os valores de massa não podem ser negativas. 
 *    A função pode retornar resultados incorretos se um valor inválido for passado.
 */
double conv_tonelada_para_grama(double t);

