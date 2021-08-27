#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

Pilha * criar_pilha() {
  Pilha *p = malloc(sizeof(Pilha));

  p->topo = 0;
  
  return p;
}

void liberar_pilha(Pilha *p) {
  free(p);
}

int empilhar(Pilha *p, char valor) {
  // overflow
  if (esta_cheia(p)) {
    // se não tem mais espaço, retorna
    return -1;
  }

  p->v[p->topo] = valor;
  p->topo++;

  return 0;
}

int desempilhar(Pilha *p) {
  // underflow da pilha
  if (esta_vazia(p)) {
    return -1;
  }

  p->topo--;

  return 0;
}

char topo(Pilha *p) {
  if (esta_vazia(p)) {
    return '\0';
  }

  return p->v[p->topo-1];
}

int esta_cheia(Pilha *p) {
  if (p->topo == TAM) {
    return TRUE;
  }

  return FALSE;
}

int esta_vazia(Pilha *p) {
  if (p->topo == 0) {
    return TRUE;
  }

  return FALSE;
}

void imprimir_pilha(Pilha *p) {
  int i = 0;

  printf("[ ");
  for (i = 0; i < p->topo; i++) {
    printf(" %c ", p->v[i]);
  }
  printf("\n");
}