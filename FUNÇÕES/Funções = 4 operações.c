#include <stdio.h>

int soma(int n1, int n2){
   int some = n1 + n2;
    return some;
}

int subtracao(int n1, int n2){
   int subtr = n1 - n2;
    return subtr;
}

int multiplicacao(int n1, int n2){
   int mult = n1 * n2;
    return mult;
}

float divisao(int n1, int n2){
    float divi = n1 / n2;
    return divi;
}

int main(){
    
    int numero1, numero2;
    int s, sb, m;
    float d;
    
    printf("digite um numero: ");
    scanf("%i",&numero1);
    
    printf("digite outro numero: ");
    scanf("%i",&numero2);
    
    s = soma(numero1, numero2);
    sb = subtracao(numero1, numero2);
    m = multiplicacao(numero1, numero2);
    d = divisao(numero1, numero2);
    
    printf("\nSoma: %i", s);
    printf("\nsubtração: %i", sb);
    printf("\nmultiplicação: %i", m);
    printf("\nDivisão: %2.f", d);
    return 0;
}
