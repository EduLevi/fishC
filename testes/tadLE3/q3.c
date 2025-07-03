#include <stdio.h>
#include <stdlib.h>
#include "q3.h"

typedef struct Node{
	int value;
	struct Node *next;
} Node;

struct Lista{
	Node *head;
	int size;
};

Lista *criarLista(){
	Lista *l = (Lista*) malloc(sizeof(Lista));
	if(l != NULL){
		l->head = NULL;
		l->size = 0;
	}else{
		printf("Erro ao alocar memoria");
	}
}

void destruirLista(Lista *l){
	Node *atual = l->head;
	while(atual->next != NULL){
		Node *temp = atual;
		atual = atual->next;
		free(temp);
	}
	free(l);
}

void inserirInicio(Lista *l, int value){
	Node *node = (Node*) malloc(sizeof(Node));
	if(node != NULL){
		node->value = value;
		node->next = l->head;
		l->head = node;
		l->size++;
	}else{
		printf("Erro ao alocar memoria");
	}
}

void inserirFim(Lista *l, int value){
	Node *node = (Node*) malloc(sizeof(Node));
	if(node != NULL){
		node->value = value;
		node->next = NULL;
		if(l->head == NULL){
			l->head = node;
		}else{
			Node *atual = l->head;
			while(atual->next != NULL){
				atual = atual->next;
			}
			atual->next = node;
		}
		l->size++;
	}else{
		printf("Erro ao alocar memoria.");
	}
}

void percorrerLista(Lista *l){
	Node *node = l->head;
	if(node != NULL){
		while(node != NULL){
			printf("%d -> ", node->value);
			node = node->next;
		}
		printf("NULL\n");
	}else{
		printf("Lista vazia.");
	}
}

Node* buscarLista(Lista *l, int value){
	Node *atual = l->head;
	while(atual != NULL){
		if(atual->value == value){
			return atual;
		}
		atual = atual->next;
	}
	return NULL;
}

void removerLista(Lista* l, int value) {
    if (l->head == NULL) {
        printf("Lista vazia, não é possível remover %d\n", value);
        return;
    }

    Node *atual = l->head;
    Node* anterior = NULL;

    while (atual != NULL) {
        if (atual->value == value) {
            if (anterior == NULL) {
                l->head = atual->next;
            } else {
                anterior->next = atual->next;
            }
            free(atual);
            l->size--;
            printf("Elemento %d removido.\n", value);
            return;
        }
        anterior = atual;
        atual = atual->next;
    }

    printf("Elemento %d não encontrado para remoção.\n", value);
}

void tamanhoLista(Lista *l){
	printf("Tamanho da lista: %d", l->size);
}
