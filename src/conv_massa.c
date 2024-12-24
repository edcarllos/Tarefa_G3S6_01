#include<stdio.h>



double conv_grama_para_quilo(double g){
    return g/1000.0;
}

double conv_quilo_para_grama(double q){
    return q*1000.0;
}

double conv_quilo_para_tonelada(double q){
    return q/1000.0;
}

double conv_tonelada_para_quilo(double t){
    return t*1000.0;
}

double conv_grama_para_tonelada(double g){
    return g/1000000.0;
}

double conv_tonelada_para_grama(double t){
    return t*1000000.0;
}

void interface_conv_massa(){
    int op = 0;
    double valor;
    printf("Digite o numero que corresponde a conversao que deseja fazer\n");
    printf("1 - Para converter de grama para quilo\n");
    printf("2 - Para converter de quilo para grama\n");
    printf("3 - Para converter de quilo para tonelada\n");
    printf("4 - Para converter de tonelada para quilo\n");
    printf("5 - Para converter de grama para tonelada\n");
    printf("6 - Para converter de tonelada para grama\n");
    printf("7 - Para sair\n");
    scanf("%d",&op);
    if((op>0)&&(op<8)){
        if(op==1){
            printf("Digite o valor em gramas a ser convertido:\n");
            scanf("%lf",&valor);
            printf("\n%.2lf gramas equivale a %.2lf quilos\n",valor,conv_grama_para_quilo(valor));
        }
        if(op==2){
            printf("Digite o valor em quilos a ser convertido:\n");
            scanf("%lf",&valor);
            printf("\n%.2lf quilos equivale a %.2lf gramas\n",valor,conv_quilo_para_grama(valor));
        }
        if(op==3){
            printf("Digite o valor em quilos a ser convertido:\n");
            scanf("%lf",&valor);
            printf("\n%.2lf quilos equivale a %.2lf toneladas\n",valor,conv_quilo_para_tonelada(valor));
        }
        if(op==4){
            printf("Digite o valor em toneladas a ser convertido:\n");
            scanf("%lf",&valor);
            printf("\n%.2lf toneladas equivale a %.2lf quilos\n",valor,conv_tonelada_para_quilo(valor));
        }
        if(op==5){
            printf("Digite o valor em gramas a ser convertido:\n");
            scanf("%lf",&valor);
            printf("\n%.2lf gramas equivale a %.2lf toneladas\n",valor,conv_grama_para_tonelada(valor));
        }
        if(op==6){
            printf("Digite o valor em toneladas a ser convertido:\n");
            scanf("%lf",&valor);
            printf("\n%.2lf toneladas equivale a %.2lf gramas\n",valor,conv_tonelada_para_grama(valor));
        }
        if(op!=7){
            interface_conv_massa();
        }
    }else{
        printf("Voce escolheu uma opcao invalida, tente novamente...\n");
        interface_conv_massa();
    }
}





