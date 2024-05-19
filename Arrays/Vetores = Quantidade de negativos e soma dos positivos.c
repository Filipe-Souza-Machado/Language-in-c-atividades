#include <stdio.h>

int main(){
    
    float numeros[10];
    int i;
    int negativos =0, somaPositivos =0;
    
    for(i =0; i < 10; i++){
        
        printf("digite o %i° numero: ",i + 1);
        scanf("%f",&numeros[i]);
        
        if(numeros[i] < 0 || numeros[i] == 0){
            negativos++;
        }
        
        if(numeros[i] > 0){
            somaPositivos = somaPositivos + numeros[i];
        }
    }
    
    printf("\nQuantidade de numeros negativos: %i", negativos);
    printf("\nSoma dos numeros positivos: %i", somaPositivos);
    
    return 0;
}