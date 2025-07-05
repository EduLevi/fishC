#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

Pilha* criarPilha() {
    Pilha* pilha = (Pilha*)malloc(sizeof(Pilha));
    pilha->topo = NULL;
    pilha->tamanho = 0;
    return pilha;
}

void push(Pilha* pilha, int valor) {
    No* novo = (No*)malloc(sizeof(No));
    novo->dado = valor;
    novo->prox = pilha->topo;
    pilha->topo = novo;
    pilha->tamanho++;
}

int pop(Pilha* pilha) {
    if (pilha->topo == NULL) {
        printf("Pilha vazia, não é possível remover.\n");
        return -1; // ou outro valor para indicar falha
    }
    No* removido = pilha->topo;
    int valor = removido->dado;
    pilha->topo = removido->prox;
    free(removido);
    pilha->tamanho--;
    return valor;
}

int topo(Pilha* pilha) {
    if (pilha->topo == NULL) {
        printf("Pilha vazia.\n");
        return -1;
    }
    return pilha->topo->dado;
}

void imprimirPilha(Pilha* pilha) {
    No* atual = pilha->topo;
    printf("Pilha (tamanho: %d): ", pilha->tamanho);
    while (atual != NULL) {
        printf("%d ", atual->dado);
        atual = atual->prox;
    }
    printf("\n");
}

void liberarPilha(Pilha* pilha) {
    while (pilha->topo != NULL) {
        pop(pilha);
    }
    free(pilha);
}
