#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

typedef struct Node{
    int value;
    struct Node* next;
} Node;

struct Lista{
    Node *head;
    int size;
};

Lista *criarLista(){
    Lista *l = (Lista*) malloc(sizeof(Lista));
    if (l != NULL){
        l->head = NULL;
        l->size = 0;
    }else{
        printf("Erro na alocacao de memoria");
    }
    return l;
}

void destruirLista(Lista* l){
    Node* atual = l->head;
    while(atual != NULL){
        Node* temp = atual;
        atual = atual->next;
        free(temp);
    }
    free(l);
}

void inserirInicio(Lista *l, int valor){
    Node *novo = (Node*) malloc(sizeof(Node));
    
    if (novo != NULL){
        novo->value = valor;
        novo->next = l->head;
        l->head = novo;
        l->size++;
    }else{
        printf("Erro na alocacao de memoria.\n");
    }
    return;
}

void inserirFim(Lista *l, int valor){
    Node *node = (Node*) malloc(sizeof(Node));

    if (node != NULL){
        node->value = valor;
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
        printf("Erro na alocacao de memoria.\n");
    }
}

void percorrerLista(Lista* l){
    Node *atual = l->head;
    
    if (atual != NULL){
        while(atual != NULL){
            printf("%d -> ", atual->value);
            atual = atual->next;
        }
        printf("NULL\n");
    }else{
        printf("Lista vazia.\n");
    }
    
}

void tamanhoLista(Lista* l){
    printf("Tamanho da lista: %d\n", l->size);
}