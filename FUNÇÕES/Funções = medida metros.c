#include <stdio.h>

int centimetros(int m){
   
   int medida = m * 100;
   return medida;
}

int main(){
    
    int metros, cm;
    
    printf("digite um numero: ");
    scanf("%i",&metros);
    
    cm = centimetros(metros);
    
    printf("%i centimetros",cm);
    
    return 0;
}
