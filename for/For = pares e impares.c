#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int numero, i;
    int soma[4];
    int pares = 0, impares = 0;
    
    for(i = 0; i < 5; i++){
        
        printf("Digite um numero: ");
        scanf("%i",&numero);
        
        soma[i] = numero;
        
        if(soma[i] %2==0){
            pares++;
            
        } else{
            impares++;
            
        }
    }
    
    printf("\nNumero pares: %i",pares);
    printf("\nNumero impares: %i",impares);
    return 0;
}
