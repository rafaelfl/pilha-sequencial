#include <stdio.h>
#include <string.h>
#include "pilha.h"

int main(void) {
  Pilha *p = criar_pilha();
  char texto[100];
  int tamanho, i;

  printf("Digite um texto a ser invertido:\n");

  scanf("%[^\n]s", texto);
  tamanho = strlen(texto);

  for (i = 0; i < tamanho; i++) {
    empilhar(p, texto[i]);
  }

  while(esta_vazia(p) == FALSE) {
    char c = topo(p);
    printf("%c", c);

    desempilhar(p);
  }
  printf("\n");
  
  liberar_pilha(p);

  return 0;
}