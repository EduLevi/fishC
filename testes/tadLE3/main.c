#include <stdio.h>
#include "q3.h"

int main(){
    Lista *l = criarLista();
    inserirInicio(l, 1);
    inserirInicio(l, 2);
    inserirInicio(l, 3);
    inserirFim(l, 10);
    removerLista(l, 2);
    printf("%d\n", buscarLista(l, 11));
    percorrerLista(l);
    tamanhoLista(l);
}