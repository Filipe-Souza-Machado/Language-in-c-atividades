#include <stdio.h>

int main(){
    
    int x[10];
    int i, maiorNumero = 0, Posicao;
    
    for(i = 0; i < 10; i++ ){
        
        printf("Digite o %i° numero: ",i + 1);
        scanf("%i",&x[i]);
        
        if(x[i] > maiorNumero){
			maiorNumero = x[i];
			Posicao  = i;
		}
    }
    
    printf("Maior número: %i \n", maiorNumero);
	printf("Posição: %i \n", Posicao + 1);
   
    return 0;
}
