#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int notas, i;
    int soma = 0;
    int mediaAritimetica;
    
    for(i = 0; i < 4; i++){
        
        printf("Digite um numero: ");
        scanf("%i",&notas);
        
        soma = soma + notas;
        
    }
    
    mediaAritimetica = soma / i;
    
    printf("media: %i",mediaAritimetica);

    return 0;
}
