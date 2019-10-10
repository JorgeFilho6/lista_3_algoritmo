#include <stdio.h>
#include <string.h>
//Leia um texto que o usuário digitar no teclado. Em seguida, informe a contagem de ocorrências de cada um dos caracteres [a-z] digitados, não importando se o usuário digitou letras minúsculas ou maiúsculas.
int main(void) {
  char texto[100];
  int i, x, conta = 0, contb = 0, contc = 0, contd = 0, conte = 0, contf = 0, contg = 0, conth = 0, conti = 0, contj = 0, contk = 0, contl = 0, contm = 0, contn = 0, conto = 0, contp = 0, contq = 0, contr = 0, conts = 0, contt = 0, contu = 0, contv = 0, contw = 0, contx = 0, conty = 0, contz = 0;
  printf("Digite algo: ");
  fgets(texto, 100, stdin);
  for(i = 0; i < strlen(texto)+1; i++){
    x = texto[i];
    if(x == 65 || x == 97){
      conta++;
    }
    if(x == 66 || x == 98){
      contb++;
    }
    if(x == 67 || x == 99){
      contc++;
    }
    if(x == 68 || x == 100){
      contd++;
    }
    if(x == 69 || x == 101){
      conte++;
    }
    if(x == 70 || x == 102){
      contf++;
    }
    if(x == 71 || x == 103){
      contg++;
    }
    if(x == 72 || x == 104){
      conth++;
    }
    if(x == 73 || x == 105){
      conti++;
    }
    if(x == 74 || x == 106){
      contj++;
    }
    if(x == 75 || x == 107){
      contk++;
    }
    if(x == 76 || x == 108){
      contl++;
    }
    if(x == 77 || x == 109){
      contm++;
    }
    if(x == 78 || x == 110){
      contn++;
    }
    if(x == 79 || x == 111){
      conto++;
    }
    if(x == 80 || x == 112){
      contp++;
    }
    if(x == 81 || x == 113){
      contq++;
    }
    if(x == 82 || x == 114){
      contr++;
    }
    if(x == 83 || x == 115){
      conts++;
    }
    if(x == 84 || x == 116){
      contt++;
    }
    if(x == 85 || x == 117){
      contu++;
    }
    if(x == 86 || x == 118){
      contv++;
    }
    if(x == 87 || x == 119){
      contw++;
    }
    if(x == 88 || x == 120){
      contx++;
    }
    if(x == 89 || x == 121){
      conty++;
    }
    if(x == 90 || x == 122){
      contz++;
    }
  }
  printf("Ocorrencias: \na: %d \nb: %d \nc: %d \nd: %d \ne: %d \nf: %d \ng: %d \nh: %d \ni: %d \nj: %d \nk: %d \nl: %d \nm: %d \nn: %d \no: %d \np: %d \nq: %d \nr: %d \ns: %d \nt: %d \nu: %d \nv: %d \nw: %d \nx: %d \ny: %d \nz: %d", conta, contb, contc, contd, conte, contf, contg, conth, conti, contj, contk, contl, contm, contn, conto, contp, contq, contr, conts, contt, contu, contv, contw, contx, conty, contz);
  return 0;
}
