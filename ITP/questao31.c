#include <stdio.h>

void subtrai(int m, int n, int A[m][n], int B[m][n], int C[m][n]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            C[i][j] = A[i][j] - B[i][j];
        }
    }
}

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    int A[m][n], B[m][n], C[m][n];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    subtrai(m, n, A, B, C);
    printf("Resultado:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    int contador = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (i > j && C[i][j] != 0) {
                contador++;
            }
        }
    }
    printf("Elementos não-nulos na região: %d\n", contador);
    return 0;
}