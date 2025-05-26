#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, tamanho, tamanhoNovo;
	char letra;
	printf("Quantos numeros deseja armazenar? ");
	scanf("%d", &tamanho);

	int *array = (int*)malloc(sizeof(int) * tamanho);

	for(i=0; i<tamanho; i++){
		printf("Digite o %d valor: ", (i+1));
		scanf("%d", &array[i]);
		printf("Valor de %d: %d\n", (i+1), array[i]);
	}
	printf("Deseja adicionar mais numeros? ");
	//scanf("%c", &letra);
	switch('y'){
		case 'y':
			printf("Quantos numeros deseja adicionar? ");
			scanf("%d", &tamanhoNovo);
			int *tmp = realloc(array, sizeof(int) * (tamanho + tamanhoNovo));
			free(array);
			array = tmp;
			for(;i<(tamanho+tamanhoNovo);i++){
				printf("Digitr o %d valor: ", (i+1));
				scanf("%d", &array[i]);
			}
	break;
		
		case 'n':
			break;
		
		default:
			printf("Valor inserido invalido!");
			return 1;
		
	}
	for(i=0; i<(tamanho+tamanhoNovo); i++){
		printf("Valor da %i do array: %d\n", (i+1), array[i]);
	}
	free(array);
	return 0;
}
