#include <stdio.h>

int MDC(int x, int y){
    int mdc, aux; 
    if (y==0){
        mdc = x;
    }
    else{
        while (y!=0)
        {
        aux = x;
        x=y;
        y = aux%y;
        }
        mdc = x;
    }
    return mdc;
}

int main(){
    int x,y;
    scanf("%d%d",&x,&y);
    printf("MDC(%d,%d) = %d\n", x,y,MDC(x,y));
}