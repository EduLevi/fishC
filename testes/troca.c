#include <stdio.h>

void troca(int *a, int *b);


int main(){
	int a, b;

	printf("Digite dois valores inteiros: ");
	scanf("%d %d", &a, &b);

	printf("a: %d\nb: %d\n", a, b);
	troca(&a, &b);
	printf("Novo a: %d\nNovo b: %d\n", a, b);
	return 0;
}

void troca(int *a, int *b){
	int aux;
	aux = *a;
	*a = *b;
	*b = aux;
}
