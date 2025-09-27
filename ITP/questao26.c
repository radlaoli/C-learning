#include <stdio.h>

void soma(int m, int n, int matriza[m][n], int matrizb[m][n]){
    int i, j;
    int Matriz[m][n];
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            Matriz[i][j] = matriza[i][j] + matrizb[i][j];
        }
    }
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", Matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int M, N;
    int i, j;
    scanf("%d %d", &M, &N);
    int matriz1[M][N], matriz2[M][N];
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            scanf("%d", &matriz1[i][j]);
        }
    }
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            scanf("%d", &matriz2[i][j]);
        }
    }
    soma(M, N, matriz1, matriz2);
    return 0;
}