#include <stdio.h>

int main() {
	int n,i, divisor;
	float v, media,soma;
	scanf("%d", &n);
	divisor = n;
	for (i = 1; i<=n; i++){
    	scanf("%f", &v);
    	if (v<0){
        	divisor -= 1;
        	continue;
    	}
    	else{
        	soma+= v;
    	}
	}
	media = soma/divisor;
    
	printf("%.2f", media);
	return 0;
}