#include <stdio.h>
//Crie uma função para converter de Farenheit para Celsius
float Celsius(){
  float celsius, f;
  printf("Digite a temperatura em Farenheit: ");
  scanf("%f", &f);
  celsius = (f - 32)*5/9;
  return celsius;
}
int main(void) {
  float a = Celsius();
  printf("Temperatura em Celsius: %2.1f", a);
  return 0;
}
