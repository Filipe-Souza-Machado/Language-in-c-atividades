/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(){
   //ENTRADA
   char nomeDoUsuario[60]="";
   int idadeDoUsuario;
   float primeiroNotaDoUsuario;
   float segundaNotaDoUsuario;
   float terceiraNotaDoUsuario;
   float quartaNotaDoUsuario;
   
   printf("Digite seu nome: ");
   scanf("%s",&nomeDoUsuario);
   
   printf("Digite sua idade: ");
   scanf("%i",&idadeDoUsuario);
   
   printf("Digite sua primeira nota: ");
   scanf("%f",&primeiroNotaDoUsuario);
   
   printf("Digite sua segunda nota: ");
   scanf("%f",&segundaNotaDoUsuario);
   
   printf("Digite sua terceira nota: ");
   scanf("%f",&terceiraNotaDoUsuario);
   
   printf("Digite sua quarta numero: ");
   scanf("%f",&quartaNotaDoUsuario);
   
   //PROCESSO 
   float mediaAritimetica =(primeiroNotaDoUsuario + segundaNotaDoUsuario + terceiraNotaDoUsuario + quartaNotaDoUsuario)/2;
   //SAIDA  
    
    printf(" Oi %s de %i sua media foi de %f",nomeDoUsuario,idadeDoUsuario,mediaAritimetica);
    

    return 0;
}
