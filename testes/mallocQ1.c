#include <stdio.h>
#include <stdlib.h>

int main(){
	float *array, media = 0;
	int tamanho;

	printf("Digite o tamanho do array: \n");
	scanf("%d", &tamanho);
	array = (float*)malloc(tamanho * sizeof(float));
	if(array == NULL){
		printf("Erro ao alocar memória.\n");
		return 1;
	}


	for(int i=0; i<tamanho; i++){
		printf("Digite a %d nota: ", (i+1));
		scanf("%f", &array[i]);
	}
	for(int i=0; i<tamanho; i++){
		//printf("indice %d: %.2f\n", i, array[i]);
		media += array[i];
	}
	media /= tamanho;
	printf("Media: %.2f\n", media);

	free(array);
	return 0;
}
