#include <stdio.h>
#include <stdlib.h>

int main() {
  int tamanho;

  // Lê o tamanho do vetor
  printf("Digite o tamanho do vetor: ");
  scanf("%d", &tamanho);

  // Aloca dinamicamente a memória para o vetor
  int *vetor = (int *) malloc(tamanho * sizeof(int));

  // Verifica se a alocação foi bem-sucedida
  if (vetor == NULL) {
    printf("Erro: Memória insuficiente.\n");
    return 1;
  }

  // Lê os dados do vetor
  printf("Digite os elementos do vetor:\n");
  for (int i = 0; i < tamanho; i++) {
    scanf("%d", &vetor[i]);
  }

  // Apresenta os dados do vetor
  printf("Vetor: [");
  if (vetor != NULL && tamanho > 0) { // Verifica se o vetor é válido e não vazio
    for (int i = 0; i < tamanho - 1; i++) {
      printf("%d,", vetor[i]);
    }
    printf("%d", vetor[tamanho - 1]);
  } else {
    printf("vazio");
  }
  printf("]\n");

  // Desaloca a memória alocada
  free(vetor);

  return 0;
}
