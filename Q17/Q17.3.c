#include <stdio.h>
//Crie uma função para converter de Celsius para Farenheit
float farh(){
  float celsius, f;
  printf("Digite a temperatura em Celsius: ");
  scanf("%f", &celsius);
  f = (celsius* 9/5) + 32;
  return f;
}
int main(void) {
  float a = farh();
  printf("Temperatura em Farhenheit: %2.1f", a);
  return 0;
}
