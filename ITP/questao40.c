#include <stdio.h>
#include <string.h>

typedef struct tPessoa
{
    char nome[100];
    int telefone;
}listaTelefonica;

int main(){
    int qtdPessoas;
    scanf("%d", &qtdPessoas);
    listaTelefonica registro[qtdPessoas];
    char nomePesquisa[100];
    int encontrado = 0;
    getchar();
    for (int i = 0; i < qtdPessoas; i++)
    {
        scanf(" %99[^\n]", registro[i].nome);
        scanf("%d", &registro[i].telefone);
        getchar();
    }
    scanf(" %99[^\n]", nomePesquisa);
    for (int i = 0; i < qtdPessoas; i++)
    {
        if (strcmp(nomePesquisa, registro[i].nome) == 0)
        {
            printf("O telefone de %s é %d", registro[i].nome, registro[i].telefone);
            encontrado = 1;
            break;
        }
    }
    if(!encontrado){
        printf("Nome %s não encontrado.", nomePesquisa);
    }
    return 0;
}