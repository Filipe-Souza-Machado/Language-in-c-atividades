/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(){
    
    // entrada de dados]
   
    int i=0,nota,soma = 0;
    float media;
    
   //processo
   for(i=1;i <= 3; i ++){
       
       do {
            printf("\ndiga sua %iª nota: ",i);
            scanf("%i",&nota);
            
       } while(nota < 0 || nota > 10);
       
       soma = soma + nota;
   }
   
   media = soma / 2;
   
   if(media >= 7){
       printf("\nVocê foi Aprovado!!!");
       
   }else if(media < 6.9 && media >= 5){
       printf("\nVocê esta de recuperação");
       
   }else if(media < 5){
       printf("\nVocê foi reprovado!!!");
   }
    
}
