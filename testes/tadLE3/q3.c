#include <stdio.h>
#include <stdlib.h>
#include "q3.h"

typedef struct Node{
	int value;
	Node *next;
} Node

struct Lista{
	Node *head;
	int size;
}

Lista *criarLista(){
	Lista l* = (Lista*) malloc(sizeof(Lista));
	if(l != NULL){
		l->hear = NULL;
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

void inserirFinal(Lista *l, int value){
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
			l->size++;
		}
	}
}
