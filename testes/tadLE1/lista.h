#define LISTA_H

typedef struct Lista Lista;

Lista* criarLista();
void destruirLista(Lista* l);

void inserirInicio(Lista* l, int valor);
void inserirFim(Lista* l, int valor);

void percorrerLista(Lista* l);
void tamanhoLista(Lista* l);
