#include <stdio.h>

int main(){
    
    int nota;
    
    do{
        printf("Digite sua nota: ");
        scanf("%i",&nota);
        
    }while(nota < 0 || nota > 10);
    
    printf("sua nota: %i",nota);

    return 0;
}
