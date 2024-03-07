/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <locale.h>

int main(){
    
    int i;
    float nota, soma, media;
 
    for (i= 1; i <= 3; i ++){
        
      printf("Digite a %iª nota: ",i);
	  scanf("%f",&nota);
	  soma = soma + nota;
	  
   }
    
   media = soma / 3;
   
   if(media >=7 && media <=10){
       printf("Você foi aprovado!!!");
       
   }else if( media == 5 || media == 6 ){
       printf("Você esta de recuperação");
       
   }else if(media >= 0 && media < 5){
       printf("voce esta reprovado\n");
   }
   
   printf("\n====== Exibindo resultado ====\n");
   printf("\tmedia: %.1f \n\n", media);
    
   
    return 0;
}
