#include <stdio.h>
#include <stdlib.h>

void inverterArray(int *ptr, int arrayLength);

int main(){
	int arrayLength;
	printf("Digite o tamanho do array: ");
	scanf("%d", &arrayLength);
	
	int *array = malloc(arrayLength * sizeof(int));
	if(array == NULL){
		printf("Erro ao alocar memória!\n");
		return 1;
	}

	for(int i=0; i<arrayLength; i++){
		scanf("%d", &array[i]);
		printf("%d\n", array[i]);

	}
	
	inverterArray(&array[0], arrayLength);
	
	for(int i=0; i<arrayLength; i++){
		printf("Posicao %d: %d\n", i, array[i]);
	}

	free(array);
	return 0;
}

void inverterArray(int *array, int arrayLength){
	int temp;
	for(int i=0; i<arrayLength/2; i++){
		temp = array[i];
		array[i] = array[arrayLength - 1 - i];
		array[arrayLength -1 - i] = temp;
	}
}
