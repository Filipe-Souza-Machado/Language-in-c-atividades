#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int notas, i;
    int soma = 0;
    int mediaAritimetica;
    
    for(i = 0; i < 3; i++){
        
        printf("Digite um numero: ");
        scanf("%i",&notas);
        
        soma = soma + notas;
        
    }
    
    mediaAritimetica = soma / i;
    
    if(mediaAritimetica >= 7){
        printf("aprovado!!!");
        
    } else if( mediaAritimetica < 7 && mediaAritimetica > 4){
        printf("recuperação!!!");
        
    } else{
        printf("reprovado!!!");
        
    }
    
    

    return 0;
}
