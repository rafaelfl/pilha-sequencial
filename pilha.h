
#define TAM 100

#define TRUE 1
#define FALSE 0

/* implementacao com vetores */
typedef struct _pilha {
  char v[TAM];
  int topo;
} Pilha;

Pilha * criar_pilha();

void liberar_pilha(Pilha *p);

int empilhar(Pilha *p, char valor);

int desempilhar(Pilha *p);

char topo(Pilha *p);

int esta_cheia(Pilha *p);

int esta_vazia(Pilha *p);

void imprimir_pilha(Pilha *p);
