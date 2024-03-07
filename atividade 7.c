/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(){
   
   int n1,n2,i,primeiraTabuada,segundaTabuada;

    printf("Digite um numero: ");
    scanf("%i",&n1);
    
    printf("Digite outro numero: ");
    scanf("%i",&n2);
    
    printf("\n\n===TABUADA DE %i",n1);
    for(i=1;i<=100;i++){
        
        primeiraTabuada = n1 * i;
        printf("\n%i x %i = %i ",n1,i,primeiraTabuada);
    }
        
       printf("\n\n=== TABUADA DE %i ===",n2);
       
       for(i=1;i<=100;i++){
        
        segundaTabuada = n2 * i;
        printf("\n%i x %i = %i ",n2,i,segundaTabuada);
    }

    return 0;
}
