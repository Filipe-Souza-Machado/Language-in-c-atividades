/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(){
    
    int nota ,media ,contadorDeNotas = 0 ,soma = 0;
    char resposta;
    
    do{
        printf("\nDigite suas notas: ");
        scanf("%i",&nota);
        
        printf("voce quer mais nota:  ");
        scanf("%c",&resposta);
        
        soma = soma + nota;
        contadorDeNotas +=1;
        
    }while(resposta != 'n');
    
    media = soma / contadorDeNotas;
    printf("\nSua media foi de: %i",media);
    return 0;
}
