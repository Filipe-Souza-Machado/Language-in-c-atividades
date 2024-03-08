/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(){
    
    // entrada de dados]
   
    int primeiraNota,segundaNota,contador = 0;
    float media;
    
   //processo
    do {
        printf("\ndiga sua primeira nota: ");
        scanf("%i",&primeiraNota);
        
        printf("\ndiga sua segunda nota: ");
        scanf("%i",&segundaNota);
        
        if(primeiraNota < 0 || primeiraNota > 10 && segundaNota < 0 || segundaNota > 10){
            printf("\nnota invalida");
             contador ++;
        }else{
             media = (primeiraNota + segundaNota)/2;
             printf("\nSua media foi: %f",media);
        }
        
    } while(primeiraNota < 0 || primeiraNota > 10 && segundaNota < 0 || segundaNota > 10);
    
    printf("\nO bloco foi repetido %i vezes",contador);

    return 0;
}
