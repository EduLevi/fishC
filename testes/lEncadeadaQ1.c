#include <stdio.h>
#include <stdlib.h>

typedef struct No{
	int dado;
	struct No* proximo;
}No;

No* criarNo(int valor){
	No* novo = (No*)malloc(sizeof(No));
	novo -> dado = valor;
	novo -> proximo = NULL;
	return novo;
}

void inserirInicio(No** lista, int valor){
	No* novo = criarNo(valor);
	novo->proximo = *lista;
	*lista = novo;
}

void inserirFim(No** lista, int valor){
	No* novo = criarNo(valor);
	if(*lista == )
}

int main(){
	No* lista = NULL;

	inserirInicio(&lista, 10);
	inserirInicio(&lista, 20);
	inserirInicio(&lista, 30);

	No* atual = lista;
	while(atual != NULL){
		printf("%d -> ", atual->dado);
		atual = atual->proximo;
	}
	printf("NULL\n");

	return 0;
}
