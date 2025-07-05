#include <stdio.h>
#include "pilha.h"

int main() {
    Pilha* pilha = criarPilha();

    // Inserir elementos na pilha
    push(pilha, 10);
    push(pilha, 20);
    push(pilha, 30);

    imprimirPilha(pilha);

    // Ver o topo
    printf("Topo da pilha: %d\n", topo(pilha));

    // Remover elemento do topo
    printf("Pop: %d\n", pop(pilha));
    imprimirPilha(pilha);

    printf("Pop: %d\n", pop(pilha));
    imprimirPilha(pilha);

    printf("Pop: %d\n", pop(pilha));
    imprimirPilha(pilha);

    // Tentar remover de pilha vazia
    printf("Pop: %d\n", pop(pilha));

    liberarPilha(pilha);

    return 0;
}
