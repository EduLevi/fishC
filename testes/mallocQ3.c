#include <stdio.h>
#include <stdlib.h>

int main(){
	int tamanho;

	printf("Quantos nomes? ");
	scanf("%d", &tamanho);

	char **array = (char **)malloc(sizeof(char *) * tamanho);
	if (array == NULL){
		printf("Erro ao alocar memoria.");
		return 1;
	}

	getchar();
	for(int i=0; i<tamanho; i++){
		array[i] = (char *) malloc(sizeof(char) * 50);
		if(array[i] == NULL){
			printf("Erro ao alocar memoria.");
			return 1;
		}
		printf("Digite o %d nome: ", (i+1));
		fgets(array[i], 50, stdin);
	}
	printf("\nNomes armazenados:\n");
	for(int i=0; i<tamanho; i++){
		printf("%d: %s", (i+1), array[i]);
	}
	for(int i=0; i<tamanho; i++){
		free(array[i]);
	}
	free(array);

	return 0;
}
