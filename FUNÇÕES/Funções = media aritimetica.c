#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 
float media(float nota1, float nota2){
   
   float mediaAritimetica = (nota1 + nota2) / 2;
   return mediaAritimetica;
}

int main(){
    
    int x, y;
    float m;
    
    printf("Digite um numero: ");
    scanf("%i",&x);
    
    printf("Digite outro numero: ");
    scanf("%i",&y);
    
    m = media(x, y);
    
    printf("Media: %2.f",m);
    
    return 0;
}
