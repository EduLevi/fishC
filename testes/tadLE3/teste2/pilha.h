#ifndef PILHA_H
#define PILHA_H

typedef struct No {
    int dado;
    struct No* prox;
} No;

typedef struct {
    No* topo;
    int tamanho;
} Pilha;

// Cria uma pilha vazia
Pilha* criarPilha();

// Insere elemento no topo
void push(Pilha* pilha, int valor);

// Remove elemento do topo
int pop(Pilha* pilha);

// Ver topo sem remover
int topo(Pilha* pilha);

// Imprime todos os elementos
void imprimirPilha(Pilha* pilha);

// Libera toda a memória
void liberarPilha(Pilha* pilha);

#endif
