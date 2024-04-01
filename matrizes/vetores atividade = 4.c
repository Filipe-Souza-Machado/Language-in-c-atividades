#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
	
	setlocale(LC_ALL,"");
	
	int i;
	int x[4], y[4];
	int soma = 0;
	 
	printf("\n====1°coleta de valores====");
	 
	for(i =0; i < 4; i++){
		printf("\nDigite os valores de x: ");
		scanf("%i",&x[i]);
	}
	
	printf("\n====2°coleta de valores====");
	
	for(i =0; i < 4; i++){
		printf("\nDigite os valores de y: ");
		scanf("%i",&y[i]);
		
	}
	
	for(i =0; i < 4; i++){
		soma =x[i] + y[i];
		printf("\nsoma: %i",soma);
		
	}
	return 0;
}
