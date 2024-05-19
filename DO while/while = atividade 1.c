/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdbool.h>
int main(){
        
    int nota, soma= 0, repeticoes =0 ;
    float mediaAritimetica;
    bool resposta = false;
    
    while(resposta == false){
        
        printf("Digite sua nota: ");
        scanf("%i",&nota);
        
        if(nota < 0){
            resposta = true;
            printf("\nSua media foi: %f\n",mediaAritimetica);
        }
        
        repeticoes ++;
        soma = soma + nota;
        mediaAritimetica = soma / repeticoes;
        
    }
   

    return 0;
}
 
    