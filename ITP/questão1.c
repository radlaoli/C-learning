#include <stdio.h>

int main(){
	double n,k,c,f;
	char unidade;
	printf("Informe a temperatura e qual a sua unidade de medida:\n");
	scanf("%lf %c", &n, &unidade);
	if(unidade == 'C'){
            c = n;
        	k = c + 273.15;
        	f = c * 1.8 + 32;
        	}
	else if(unidade == 'F'){
        	f = n;
        	c = (f - 32) / 1.8;
        	k = c + 273.15;
        	}
	else if(unidade == 'K'){
        	k = n;
        	c = k - 273.15;
        	f = c * 1.8 + 32;
   	 
    	}
	printf("Em Celsius: %.2lf\nEm Fahrenheit: %.2lf\nEm Kelvin: %.2lf", c, f, k);
    
	return 0;
}