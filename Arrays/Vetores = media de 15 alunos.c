#include <stdio.h>

int main(){
    
    int notas[15];
    int i, contador=0, mediaGeral;
    int soma =0;
    
    for(i =0; i < 15; i++){
        
        printf("%i° aluno digite sua nota: ",i + 1);
        scanf("%i",&notas[i]);
        soma = soma + notas[i];
        contador ++;
    }
    mediaGeral = soma / contador;
    
    printf("A media geral dos alunos foi: %i", mediaGeral);
    return 0;
}
