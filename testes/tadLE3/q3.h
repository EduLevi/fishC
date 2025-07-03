#define Q3_H

typedef struct Lista Lista;
typedef struct Node Node;

Lista* criarLista();
void destruirLista(Lista *l);

void inserirInicio(Lista *l, int value);
void inserirFim(Lista *l, int value);

void percorrerLista(Lista *l);
Node* buscarLista(Lista *l, int value);
void removerLista(Lista* l, int value);
void tamanhoLista(Lista *l);