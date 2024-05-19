#include <stdio.h>

int par_Ou_Impar(int n1){
   
   if(n1 %2==0){
       printf("\nÉ par");
   }else{
       printf("\nÉ impar");
   }
}

int main(){
    
    int numero1, s;
    
    printf("digite um numero: ");
    scanf("%i",&numero1);
    
    s = par_Ou_Impar(numero1);
    
    printf("%i",s);
    
    return 0;
}
