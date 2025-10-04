#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char A[40], B[40];
    int rep = 0, indices[40]; 

    scanf("%[^\n]", A);
    getchar();
    scanf("%[^\n]", B);

    for (int i = 0; i <= strlen(B) - strlen(A); i++)
    {
        int c = 1;
        for (int j = 0; j < strlen(A); j++)
        {
            if(tolower(B[i+j]) != tolower(A[j])){
                c = 0;
                break;
            }
        }
        if(c){
            indices[rep] = i;
            rep++;
        }
    }
    
    printf("Repetições: %d", rep);
    if (rep != 0) {
        printf("\nPosições:");
        for (int i = 0; i < rep; i++) {
            printf(" %d", indices[i]);
        }
    }
    printf("\n");

    return 0;
}