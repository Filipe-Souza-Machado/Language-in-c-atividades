/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int calculo(int n1 , int n2){
float media =(n1 + n2)/2;
return media;
}

int main(){
    
    int primeiroNumero , segundoNumero ;
    float media;

    printf("digite um numero: ");
    scanf("%i",&primeiroNumero);
    
    printf("digite outro numero: ");
    scanf("%i",&segundoNumero);

    media = calculo(primeiroNumero , segundoNumero);
    printf("%f",media);
    return 0;
}
