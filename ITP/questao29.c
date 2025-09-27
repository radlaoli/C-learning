#include <stdio.h>

void simetria(int m, int matriza[m][m]) {
    int i, j;
    int simetrica = 1;

    for (i = 0; i < m; i++) {
        for (j = 0; j < m; j++) {
            if (matriza[i][j] != matriza[j][i]) {
                simetrica = 0;
                break;
            }
        }
        if (simetrica == 0) {
            break;
        }
    }

    if (simetrica) {
        printf("A matriz e simetrica\n");
    } else {
        printf("A matriz nao e simetrica\n");
    }
}

int main() {
    int M, i, j;
    scanf("%d", &M);

    int matriz1[M][M];
    for (i = 0; i < M; i++) {
        for (j = 0; j < M; j++) {
            scanf("%d", &matriz1[i][j]);
        }
    }

    simetria(M, matriz1);
    return 0;
}
