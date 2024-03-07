/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(){
    
    int i, n1,n2,n3,n4,n5,resultado;
    
    printf("Digite um numero: ");
    scanf("%i",&n1);
    
    printf("Digite um numero: ");
    scanf("%i",&n2);
    
    printf("Digite um numero: ");
    scanf("%i",&n3);
    
    printf("Digite um numero: ");
    scanf("%i",&n4);
    
    printf("Digite um numero: ");
    scanf("%i",&n5);
    
    for(i=1;i>=1;i++){
        
        resultado =n1 + n2 + n3 + n4 + n5;
        printf("resultado: ");
        printf("%i",resultado);
    }
    return 0;
}
