#include <stdio.h>
#include "q2.h"

int main(){
    Lista* l = criarLista();
    inserirInicio(l, 10);
    inserirInicio(l, 11);
    inserirInicio(l, 12);
    inserirFim(l, 13);
    percorrerLista(l);

    return 0;
}