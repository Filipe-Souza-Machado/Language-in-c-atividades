#include <stdio.h>

float inflacao(float m){
    float soma;
    
    if(m < 100){
        soma = (m * 10) / 100;
        return m + soma;
        
    } else if(m <= 100){
        soma = (m * 20) / 100;
        return m + soma;
    }
}

int main(){
    
    float preco, money;
    
    printf("digite um numero: ");
    scanf("%f",&preco);
    
    money = inflacao(preco);
    
    printf("preço a pagar: R$ %1.f",money);
    
    return 0;
}
