#include <stdio.h>
#include <string.h>

int main(){
    char palavra[49], reverso[49];
    int j = 0;
    int palindromo = 1;
    scanf("%[^\n]", palavra);
    
    for (int i = strlen(palavra) - 1; i >= 0; i--)
    {
        if (palavra[i] != ' ') {
            reverso[j] = palavra[i];
            j++;
        }
    }
    reverso[j] = '\0';
    
    int k = 0;
    for (int i = 0; i < strlen(palavra); i++)
    {
        if (palavra[i] != ' ') {
            if (palavra[i] != reverso[k])
            {
                palindromo = 0;
                break;
            }
            k++;
        }
    }
    //
    if (palindromo)
    {
        printf("É palíndromo");
    }
    else{
        printf("Não é palíndromo");
    }
    return 0;
}