#ifndef LISTA_DUPLA_H
#define LISTA_DUPLA_H

typedef struct No {
    int dado;
    struct No* prox;
    struct No* ant;
} No;

typedef struct {
    No* inicio;
    No* fim;
    int tamanho;
} ListaDupla;

// Cria uma nova lista
ListaDupla* criarLista();

// Insere no início
void inserirInicio(ListaDupla* lista, int valor);

// Insere no fim
void inserirFim(ListaDupla* lista, int valor);

// Remove um elemento específico
void remover(ListaDupla* lista, int valor);

// Imprime do início para o fim
void imprimirFrente(ListaDupla* lista);

// Imprime do fim para o início
void imprimirTras(ListaDupla* lista);

// Libera toda a memória
void liberarLista(ListaDupla* lista);

#endif
