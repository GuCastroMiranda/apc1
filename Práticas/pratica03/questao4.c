// Faça um programa em C que leia um ano e verifique se ele é bissexto (é múltiplo de 4 e não é múltiplo de 100, ou é múltiplo de 400//
#include <stdio.h>
int main() {

int ano =0;
  printf("Digite o ano p/ verificar se é bissexto: ");
  scanf("%d", &ano);

if (ano % 4 == 0){
  printf("O ano é bissexto!");
}else if (ano % 4 == 0 && ano % 100 == 1 && ano % 400 == 0){
  printf("O ano digitado é bissexto!");
}else{
  printf("O ano digitado não é bissexto!");
}

  

  return 0;
}