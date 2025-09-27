#include <stdio.h>
#include <math.h>

int main() {
    int numbers, i, soma = 0;
    double multiplicacao = 1.0;
    double geometrica;
    float aritmetica, harmonica, somainv = 0.0;
    float erromedio = 0.0, errog = 0.0, erroh = 0.0;

    for (i = 0; i < 10; i++) {
        scanf("%i", &numbers);
        soma += numbers;
        multiplicacao *= numbers;
        somainv += (float)1 / numbers;
    }

    aritmetica = (float)soma / 10;
    geometrica = pow(multiplicacao, (float)1 / 10);
    harmonica = 10 / somainv;
    errog = (geometrica - aritmetica) / aritmetica;
    erroh = (harmonica - aritmetica) / aritmetica;
    erromedio = (errog + erroh) / 2.0;
    printf("Média aritmética é %.2f\n"
           "Média harmônica é %.2f\n"
           "Média geométrica é %.2f\n"
           "Erro médio é %.2f %%", 
           aritmetica, harmonica, geometrica, erromedio*100);
    return 0;
}