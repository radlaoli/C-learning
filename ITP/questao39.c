#include <stdio.h>

typedef struct tPessoa
{
    char nome[100];
    int telefone;
}listaTelefonica;

int main(){
    int qtdPessoas;
    scanf("%d", &qtdPessoas);
    listaTelefonica registro[qtdPessoas];
    getchar();
    for (int i = 0; i < qtdPessoas; i++)
    {
        scanf(" %99[^\n]", registro[i].nome);
        scanf("%d", &registro[i].telefone);
    }
    for (int i = 0; i < qtdPessoas; i++)
    {
        printf("O telefone de %s é %d\n", registro[i].nome, registro[i].telefone);
    }
    return 0;
}