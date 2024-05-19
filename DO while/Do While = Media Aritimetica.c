#include <stdio.h>

int main(){
    
    int i, nota, mediaAritimetica;
    int soma = 0, contagem = 0;
    
    for(i = 0; i < 2; i++){
        
        do{
        printf("Digite sua nota: ");
        scanf("%i",&nota);
        
        contagem ++;
        soma = soma + nota;
        
        }while(nota < 0 || nota > 10);
    
    }
    
    mediaAritimetica = soma / contagem;
    
    printf("sua media aritimetica: %i",mediaAritimetica);

    return 0;
}
