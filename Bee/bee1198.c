#include <stdio.h>
int main(){
    int i = 2, j=0;
    for(j = 0; j<3;j++){
        printf("I=%d J=%d\n", i,j+i+1);
    } 
    return 0;
}