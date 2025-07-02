#include <stdio.h>
#include "lista.h"

int main(){
    Lista* minha_lista = criarLista();
    inserirInicio(minha_lista, 10);
    inserirInicio(minha_lista, 20);
    inserirInicio(minha_lista, 30);
    inserirInicio(minha_lista, 40);
    inserirFim(minha_lista, 50);

   
    percorrerLista(minha_lista);
    tamanhoLista(minha_lista);

    destruirLista(minha_lista);

    return 0;
}