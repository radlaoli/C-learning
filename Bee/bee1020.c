#include <stdio.h>

int main() {
    int anos, meses, dias;
    int dias_originais;
    
    scanf("%d", &dias_originais);
    
    anos = dias_originais / 365;
    meses = (dias_originais % 365) / 30;
    dias = (dias_originais % 365) % 30;
    
    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);
    
    return 0;
}