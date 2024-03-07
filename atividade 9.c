/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(){
    
  int n1 = 100;

  printf("Digite um numero: ");
  scanf("%i",&n1);
    
  while(n1>=100 && n1<=200){
      printf("\n%i",n1);
      n1++;
  }
    
    return 0;
}
