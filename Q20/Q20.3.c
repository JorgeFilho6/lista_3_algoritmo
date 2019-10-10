#include <stdio.h>

int fatores(a){
  int i = 1, n, d, y=1, primo = 1, tmp;
  printf("%d = ", a);
  d=0;
  while(a > d ){
    tmp = 2;
    i = 0;
    primo++;
    while (tmp < primo){
      if(primo % tmp == 0){
        primo++;
        tmp = 2;
      }
      tmp++;
    }
    while(a % primo == 0){
      i++;
      a = a / primo;
    }
    if(i>=1){
      while(y<=i){
        printf("%d x ", primo);
        y++;
      }
      y=1;
    }
    d++;
  }
  printf("\n");
  return primo;
}
int main(){
  int a;
  printf("Digite um numero: ");
  scanf("%d", &a);
  fatores(a);
  return 0;
}
