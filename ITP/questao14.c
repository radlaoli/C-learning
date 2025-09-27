#include <stdio.h>
#include <stdlib.h>
int soma(int n){
    int soma=0, i;
    for(i=1;i<n;i++){
        if(n%i==0){
            soma += i;
        }
    }
    return soma;
}
char Colegas(int n1, int n2){
    if (abs(soma(n1)-n2)<=2 && abs(soma(n2)-n1) <=2){
        return 'S';
    }
    else{
        return 'N';
    }
}
int main(){
    int N1,N2;
    scanf ("%d%d", &N1,&N2);
    printf("%c",Colegas(N1,N2));
    return 0;
}