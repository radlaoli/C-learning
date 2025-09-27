#include <stdio.h>

int main(){
    float A, B, C,TRIANGULO,CIRCULO,TRAPEZIO,QUADRADO,RETANGULO;
    scanf("%f%f%f", &A, &B, &C);
    TRIANGULO = A*C/2;
    CIRCULO = 3.14159*C*C;
    TRAPEZIO = (A+B)*C/2;
    QUADRADO = B*B;
    RETANGULO = A*B ;
    printf("TRIANGULO: %.3f\nCIRCULO: %.3f\nTRAPEZIO: %.3f\nQUADRADO: %.3f\nRETANGULO: %.3f\n", TRIANGULO,CIRCULO,TRAPEZIO,QUADRADO,RETANGULO);
    return 0;
}