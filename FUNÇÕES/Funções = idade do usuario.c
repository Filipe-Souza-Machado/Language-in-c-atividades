#include <stdio.h>

int idadeDoUsuario(int n1){
    
    int i=0, soma= 0, numero= n1 ;
    
    while(numero <2024){
        numero ++;
        i++;
    }

    return i;
}

int main(){
    
    int dataDeNascimento,idade;
    
    printf("digite sua primeira nota: ");
    scanf("%i",&dataDeNascimento);
    
    idade = idadeDoUsuario(dataDeNascimento);
    printf("Você tem %i anos de idade", idade);
    
    return 0;
}