#include <stdio.h>

int main() {
    int numero = 42;
    int *ponteiro;  // isso é um ponteiro para int

    ponteiro = &numero;  // o ponteiro recebe o endereço de 'numero'

    printf("Valor da variável numero: %d\n", numero);
    printf("Endereço de memoria de numero: %p\n", &numero);
    printf("Valor guardado no ponteiro: %p\n", ponteiro);
    printf("Valor apontado pelo ponteiro: %d\n", *ponteiro);

    return 0;
}
