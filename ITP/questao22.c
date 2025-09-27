#include <stdio.h>

int main() {
    int A[15], B[15], C[15], D[15];
    int i;
    int contB = 0,contC = 0, contD = 0;
    for (i = 0; i < 15; i++) {
        scanf("%d", &A[i]);
    }
    for (i = 0; i < 15; i++) {
        if (A[i] % 2 == 0 && A[i] % 3 == 0) {
            B[contB++] = A[i];
            C[contC++] = A[i];
        }
        else if (A[i] % 2 == 0) {
            B[contB++] = A[i];
        }
        else if (A[i] % 3 == 0) {
            C[contC++] = A[i];
        }
        else {
            D[contD++] = A[i];
        }
    }
    printf("B = [");
     for (i = 0; i < contB; i++) {
        if (i<contB-1)
        {
            printf("%d, ", B[i]);
        }
        else
        {
            printf("%d]", B[i]);
        }
    }
    printf("\nC = [");
    for (i = 0; i < contC; i++) {
        if (i<contC-1) {
            printf("%d, ", C[i]);
        }
        else
        {
            printf("%d]", C[i]);
        }
  }
    printf("\nD = [");
    for (i = 0; i < contD; i++) {
        if (i<contD-1)
        {
            printf("%d, ", D[i]);
        }
        else
        {
            printf("%d]", D[i]);
        }
    }
    return 0;
}