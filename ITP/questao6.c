#include <stdio.h>

int main() {
    float tempoMaximo, inscricoes;
    float total_inscricoes = 0; 
    int aptos = 0, series = 0;
    scanf("%f", &tempoMaximo);
    while (1) { 
        scanf("%f", &inscricoes);
        if (inscricoes < 0) { 
            break;
        }
        if (inscricoes > tempoMaximo) {
            continue; 
        } else {
            aptos += 1;
            total_inscricoes += inscricoes;
        }
    }
    series = (aptos + 7) / 8;   
    printf("%d %d\n", aptos, series);
    return 0;
}