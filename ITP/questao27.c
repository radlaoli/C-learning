#include <stdio.h>

void transposta(int m, int n, int A[m][n]) {
    int B[n][m];
    int i, j;

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            B[j][i] = A[i][j];
        }
    }

    printf("Transposta:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int m, n, i, j;
    
    scanf("%d %d", &m, &n);
    int A[m][n];

    if (m < 30 && n < 30) {
        for (i = 0; i < m; i++) {
            for (j = 0; j < n; j++) {
                scanf("%d", &A[i][j]);
            }
        }
    }

    transposta(m, n, A);
    return 0;
}
