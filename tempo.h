#ifndef TEMPO_H
#define TEMPO_H

// Funções de conversão de tempo
double segundos_para_minutos(double segundos) {
    return segundos / 60.0;
}

double segundos_para_horas(double segundos) {
    return segundos / 3600.0;
}

double minutos_para_horas(double minutos) {
    return minutos / 60.0;
}

#endif
