#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 
float media(int n1){
   
   int i;
   
   for(i = 0; i <= 10; i++){
       
        printf("\n%i x %i = %i",n1, i , n1 * i);
       
   }
}

int main(){
    
    int x;
    printf("Digite um numero: ");
    scanf("%i",&x);
    
    media(x);
    
    return 0;
}
