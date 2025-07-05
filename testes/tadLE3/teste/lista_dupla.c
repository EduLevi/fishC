#include <stdio.h>
#include <stdlib.h>
#include "lista_dupla.h"

ListaDupla* criarLista() {
    ListaDupla* lista = malloc(sizeof(ListaDupla));
    lista->inicio = NULL;
    lista->fim = NULL;
    lista->tamanho = 0;
    return lista;
}

void inserirInicio(ListaDupla* lista, int valor) {
    No* novo = malloc(sizeof(No));
    novo->dado = valor;
    novo->prox = lista->inicio;
    novo->ant = NULL;

    if (lista->inicio != NULL) {
        lista->inicio->ant = novo;
    } else {
        lista->fim = novo; // Se era vazia, fim também aponta para novo
    }

    lista->inicio = novo;
    lista->tamanho++;
}

void inserirFim(ListaDupla* lista, int valor) {
    No* novo = malloc(sizeof(No));
    novo->dado = valor;
    novo->prox = NULL;
    novo->ant = lista->fim;

    if (lista->fim != NULL) {
        lista->fim->prox = novo;
    } else {
        lista->inicio = novo; // Se era vazia, início também aponta para novo
    }

    lista->fim = novo;
    lista->tamanho++;
}

void remover(ListaDupla* lista, int valor) {
    if (lista->inicio == NULL) {
        printf("Lista vazia. Nada a remover.\n");
        return;
    }

    No* atual = lista->inicio;

    while (atual != NULL) {
        if (atual->dado == valor) {
            if (atual->ant != NULL) {
                atual->ant->prox = atual->prox;
            } else {
                lista->inicio = atual->prox;
            }

            if (atual->prox != NULL) {
                atual->prox->ant = atual->ant;
            } else {
                lista->fim = atual->ant;
            }

            free(atual);
            lista->tamanho--;
            printf("Removido: %d\n", valor);
            return;
        }
        atual = atual->prox;
    }

    printf("Elemento %d não encontrado.\n", valor);
}

void imprimirFrente(ListaDupla* lista) {
    No* atual = lista->inicio;
    printf("Lista (início -> fim) [tamanho: %d]: ", lista->tamanho);
    while (atual != NULL) {
        printf("%d ", atual->dado);
        atual = atual->prox;
    }
    printf("\n");
}

void imprimirTras(ListaDupla* lista) {
    No* atual = lista->fim;
    printf("Lista (fim -> início) [tamanho: %d]: ", lista->tamanho);
    while (atual != NULL) {
        printf("%d ", atual->dado);
        atual = atual->ant;
    }
    printf("\n");
}

void liberarLista(ListaDupla* lista) {
    No* atual = lista->inicio;
    while (atual != NULL) {
        No* temp = atual;
        atual = atual->prox;
        free(temp);
    }
    free(lista);
}
