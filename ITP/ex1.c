#include <stdio.h>

int main(){
    char c;
    scanf("%c", &c);
    if (c >=97 && c <=122) //verifica se a letra está no intervalo das minusculas no ASCII
    {
        c -= 32; // leva a letra para o bairro das maiúsculas, que é 32 casas a menos das minúculas
    };
    short int n = 3; //curta capacidade de armazenamento em bits
    printf("%c",c);
    return 0;
}