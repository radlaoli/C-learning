#include <stdio.h>

int scoreab(int a, int b, int c) {
    int maior, menor, medio;
    
    if (a >= b && a >= c) {
        maior = a;
    } 
    else if (b >= a && b >= c) {
        maior = b;
    } 
    else {
        maior = c;
    }
    if (a <= b && a <= c) {
        menor = a;
    } 
    else if (b <= a && b <= c) {
        menor = b;
    } 
    else {
        menor = c;
    }
    medio = (a + b + c) - maior - menor;
    return medio;
}

int receber() {
    int s1, s2, s3;
    int score1, score2, score3;
    scanf("%d %d %d", &s1, &s2, &s3);
    score1 = scoreab(s1, s2, s3);
    scanf("%d %d %d", &s1, &s2, &s3);
    score2 = scoreab(s1, s2, s3);
    scanf("%d %d %d", &s1, &s2, &s3);
    score3 = scoreab(s1, s2, s3);

    return scoreab(score1, score2, score3);
}
int main(void) {
    int scoreA, scoreB;
    scoreA = receber();
    scoreB = receber();
    if (scoreA > scoreB) {
        printf("A\n");
    } 
    else if (scoreB > scoreA) {
        printf("B\n");
    } 
    else {
        printf("empate\n");
    }
    return 0;
}