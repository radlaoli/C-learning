#include <stdio.h>
#include <string.h>

void instr(char s1[], char s2[], char s3[], int p) {
    int i, j;
    
    for (i = 0; i < p; i++) {
        s3[i] = s1[i];
    }
    
    for (j = 0; s2[j] != '\0'; j++) {
        s3[i + j] = s2[j];
    }
    
    for (; s1[i] != '\0'; i++) {
        s3[i + j] = s1[i];
    }
    
    s3[i + j] = '\0';
}

int main() {
    char s1[21], s2[21], s3[41];
    int p;
    
    scanf("%[^\n]", s1);
    getchar();
    scanf("%[^\n]", s2);
    getchar();
    scanf("%d", &p);
    
    instr(s1, s2, s3, p);
    
    printf("%s\n", s3);
    
    return 0;
}