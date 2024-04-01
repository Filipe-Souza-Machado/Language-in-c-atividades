#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
	
	setlocale(LC_ALL,"");
	
	int i, pares = 0;
	int x[10];
	 	 
	for(i =0; i < 10; i++){
		
		printf("\nDigite o %i° numero: ",i+ 1);
		scanf("%i",&x[i]);
	}
	
	for(i =0; i < 10; i++){
		
		if(x[i] %2 == 0){
		pares ++;
		printf("\n numero: %i",x[i]);
		
		}		
	}
	printf("\n %i numeros pares", pares);
	return 0;
}
