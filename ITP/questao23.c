#include <stdio.h>

int main(){
    int qtd, i,contA=0,contB=0,contC =0;
    scanf("%d", &qtd);
    float turma[qtd],Aprovados[qtd], reprovados[qtd], rec[qtd];
    int posA[qtd], posB[qtd], posC[qtd];
    for( i = 0; i < qtd; i++)
    {
        scanf("%*d - %f", &turma[i]);
        if (turma[i]>=7.0){
            Aprovados[contA]= turma[i];
            posA[contA] = i + 1;
            contA++;
        }
        else if (turma[i]<5.0){
            reprovados[contC]= turma[i];
            posC[contC] = i + 1;
            contC++;
        }
        else{
            rec[contB]= turma[i];
            posB[contB] = i + 1;
            contB++;
        }
    }
    printf("Aprovados: ");
    for ( i = 0; i < contA; i++)
    {
        if (i<contA-1){
            printf("%d (%.1f),", posA[i], Aprovados[i]);
        }
        else{
            printf("%d (%.1f)", posA[i], Aprovados[i]);
        }
    }
    printf("\nRecuperação: ");
    for ( i = 0; i < contB; i++)
    {
        if (i<contB-1){
            printf("%d (%.1f),", posB[i], rec[i]);
        }
        else{
            printf("%d (%.1f)", posB[i], rec[i]);
        }
    }
    printf("\nReprovados: ");
    for ( i = 0; i < contC; i++)
    {
        if (i<contC-1){
            printf("%d (%.1f),", posC[i], reprovados[i]);
        }
        else{
            printf("%d (%.1f)", posC[i], reprovados[i]);
        }
    }
    return 0;
}