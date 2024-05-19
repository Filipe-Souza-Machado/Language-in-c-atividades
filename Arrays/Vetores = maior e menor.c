#include <stdio.h>

int main(){
    
    int x[10];
    int i, menorNumero =999, maiorNumero = 0;
    
    for(i = 0; i < 10; i++ ){
        
        printf("Digite o %i° numero: ",i + 1);
        scanf("%i",&x[i]);
        
        if(x[i] > maiorNumero){
			maiorNumero = x[i];
		}
		if(x[i] < menorNumero){
			menorNumero = x[i];
	    }
        
    }
    
    printf("Menor número: %i \n", menorNumero);
	printf("Maior Número: %i \n", maiorNumero);
   
    return 0;
}
