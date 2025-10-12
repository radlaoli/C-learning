#include <stdio.h>
#define tamMax 100

typedef struct Pessoa{
    char nome[tamMax];
    int idade;
    char sexo = "M"||"F"||"N";
};
enum opcoes{
    criar = 1,
    inserir,
    deletar,
    imprimir,
};

int main(){
    int num;
    scanf("%d", &num);
    return 0;
}