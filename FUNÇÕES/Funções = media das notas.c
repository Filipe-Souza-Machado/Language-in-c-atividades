#include <stdio.h>

int mediaGeral(int n1, int n2){
    
    int media = (n1 + n2) / 2;
    
    if(media >= 7){
        printf("\nsua media foi de: %i",media);
        printf("\naprovado !!!");
        
    } else{
        printf("\nsua media foi de: %i",media);
        printf("\nReprovado !!!");
        
    }
}

int main(){
    
    int primeiraNota, segundaNota, m;
    
    printf("digite sua primeira nota: ");
    scanf("%i",&primeiraNota);
    
    printf("digite sua segunda nota: ");
    scanf("%i",&segundaNota);
    
    m = mediaGeral(primeiraNota, segundaNota);
    
    return 0;
}