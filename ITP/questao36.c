#include <stdio.h>
#include <string.h>

int main(){
    char str1[30], str2[30];
    
    scanf("%[^\n]", str1);
    getchar();
    scanf("%[^\n]", str2);
    
    int tam1 = strlen(str1);
    int tam2 = strlen(str2);
    int substr = 0;
    
    for (int i = 0; i <= tam1 - tam2; i++) {
        int igual = 1;
        for (int j = 0; j < tam2; j++) {
            if (str1[i + j] != str2[j]) {
                igual = 0;
                break;
            }
        }
        if (igual) {
            substr = 1;
            break;
        }
    }    
    if (substr) {
        printf("É substring");
    } else {
        printf("Não é substring");
    }
    return 0;
}