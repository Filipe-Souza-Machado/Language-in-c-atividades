#include <stdio.h>

int positivo_Ou_Negativo(int n1){
    
    if(n1 > 0){
        printf("É positivo");
    } else{
        printf("É negativo");
    }
    return 0;
}

int main(){
    
    int numero,escolha;
    
    printf("digite um numero: ");
    scanf("%i",&numero);
    
    escolha = positivo_Ou_Negativo(numero);
    
    return 0;
}