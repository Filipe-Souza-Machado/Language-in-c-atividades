/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(){
    
int n1,i,resultado;

    printf("Digite um numero: ");
    scanf("%i",&n1);
    
    for(i=1;i<=100;i++){
        
        resultado = n1 * i;
        printf("\n%i x %i = %i ",n1,i,resultado);
        
    }


    return 0;
}
