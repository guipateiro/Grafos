#include <stdio.h>
#include "grafo.h"

//------------------------------------------------------------------------------

int main(void) {

  grafo g = le_grafo();

  printf("numero de vertices de g: %i\n",n_vertices(g));
  printf("numero de arestas de g: %i\n",n_arestas(g));
  
  escreve_grafo(g);

  destroi_grafo(g);

  return 0;
}
