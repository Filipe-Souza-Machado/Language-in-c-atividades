#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
#include <time.h>

#define TAM 5
int main(){
	
	setlocale(LC_ALL,"");
	
	int positivo = 0, negativo = 0;
	int i;
	int numeros[TAM];
	
	for(i = 0; i < TAM;i++){
		
		printf("Digite os n�meros: ");
		scanf("%i",&numeros[i]);
		
		if(numeros[i] > 0){
			positivo = positivo + 1;
		} else {
			negativo++;
		}
		
	}
		system("cls || clear");
		printf("\n>>> Exibindo n�meros ao usu�rio <<<");
		printf("\nQuantidade de n�meros positivos: %i", positivo);
		printf("\nQuantidade de n�meros negtivos: %i", negativo);
		
	return 0;
}
