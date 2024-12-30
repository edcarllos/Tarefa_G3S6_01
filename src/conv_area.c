float convAreaMparaCM(float valor)
{

    if (valor >= 0)
    {
        return valor * 10000;
    }
}
float convAreaCMparaM(float valor)
{
    if (valor >= 0)
    {
        return valor / 10000;
    }
}

void interface_conv_area()
{
    int opcao;
    printf("\a\nDigite o numero da conversao que deseja fazer:\n");
    printf("1 Metros quadrados para centimetros quadrados");
    printf("2 centimetros quadrados para Metros quadrados");
    scanf("%d", &opcao);

    if (opcao == 1)
    {
        float convAreaMparaCM();
    }
    else
    {
        if (opcao == 2)
        {
            float convAreaCMparaM();
        }
    }
}