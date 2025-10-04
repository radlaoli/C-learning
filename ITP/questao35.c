#include <stdio.h>
#include <string.h>

int main(){
    char palavra[49], reverso[49];
    int j = 0;
    int palindromo = 1;
    scanf("%[^\n]", palavra);
    for (int i= strlen(palavra)-1; i >= 0 ; i--)
    {
        reverso[j] = palavra[i];
        j++;
    }
    for ( int i = 0; i < strlen(palavra); i++)
    {
        if (palavra[i] != reverso[i])
        {
            palindromo = 0;
        }
    }
    if (palindromo)
    {
        printf("É palíndromo");
    }
    else{
        printf("Não é palíndromo");
    }
    
    
    return 0;
}