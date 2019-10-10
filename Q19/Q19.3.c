#include <stdio.h> 
#include <stdlib.h> 
void aleatorio(int menor, int maior){ 
  int num = (rand() % (maior - menor + 1)) + menor; 
  printf("%d ", num); 
} 
int main() { 
  int menor = 0, maior = 0;
  printf("Digite o primeiro numero do intervalo: ");
  scanf("%d", &menor); 
  printf("Digite o proximo numero do intervalo: ");
  scanf("%d", &maior); 
  srand(time(0));
  printf("Aleatorio no intervalo [%d, %d] = ", menor, maior); 
  aleatorio(menor, maior);
  return 0; 
} 
