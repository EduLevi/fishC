#define Q2_H

typedef struct Lista Lista;

Lista* criarLista();
void destruirLista(Lista *l);

void inserirInicio(Lista *l, int value);
void inserirFim(Lista *l, int value);

void percorrerLista(Lista *l);
void tamanhoLista(Lista *l);