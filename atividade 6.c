/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int soma(int n1 , int n2){
return n1 + n2;
}

int subtr(int n1 , int n2){
return n1 - n2;
}

int mult(int n1 , int n2){
return n1 * n2;
}

int divi(int n1 , int n2){
return n1 / n2;
}

int main(){
    
    int primeiroNumero, segundoNumero;
    int adicao, subtracao, multiplicacao;
    float divisao;
    
    printf("digite um numero: ");
    scanf("%i",&primeiroNumero);
    
    printf("digite outro numero: ");
    scanf("%i",&segundoNumero);

    
    adicao = soma(primeiroNumero , segundoNumero);
    subtracao = subtr(primeiroNumero , segundoNumero);
    multiplicacao = mult(primeiroNumero , segundoNumero);
    divisao = divi(primeiroNumero , segundoNumero);
    
    printf("\nSoma: %i",adicao);
    printf("\nSubtração: %i",subtracao);
    printf("\nMultiplicação: %i",multiplicacao);
    printf("\nDivisão: %f",divisao);
    return 0;
}
