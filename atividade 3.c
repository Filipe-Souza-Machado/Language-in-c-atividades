/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(){
   //ENTRADA
   
  int numeroDoUsuario;
    printf("Digite um numero: ");
    scanf("%i",&numeroDoUsuario);

    if(numeroDoUsuario % 2 == 0 ){
        printf("é par");
    }else{
        printf("é impar");
    }
    return 0;
}
