/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(){
   //ENTRADA
   int primeiroNumero;
   int segundoNumero;
   int soma;
   int subtr;
   int mult;
   int divi;
   
   printf("Digite um numero: ");
   scanf("%i",&primeiroNumero);
   
    printf("Digite outro numero: ");
   scanf("%i",&segundoNumero);
   //PROCESSO 
   soma = primeiroNumero + segundoNumero;
   subtr = primeiroNumero - segundoNumero;
   mult = primeiroNumero * segundoNumero;
   divi = primeiroNumero / segundoNumero;
   //SAIDA  
    
    printf("\n%i + %i = %i ",primeiroNumero,segundoNumero,soma);
    printf("\n%i - %i = %i ",primeiroNumero,segundoNumero,subtr);
    printf("\n%i x %i = %i ",primeiroNumero,segundoNumero,mult);
    printf("\n%i : %i = %i ",primeiroNumero,segundoNumero,divi);

    return 0;
}
