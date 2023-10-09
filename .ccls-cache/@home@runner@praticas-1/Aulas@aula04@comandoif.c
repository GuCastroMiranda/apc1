#include <stdio.h>

int main() {
int numero = 0;

printf("Entre com um número inteiro: ");
scanf("%i", &numero);

  int par = numero % 2 == 0; 

  if (par) {
    
  printf("O numero %i é par!\n", numero);
  }
  
  int impar = numero % 2 != 0;

  if (impar){
  printf("O numero %i é impar!\n", numero);
    
  }

  
  return 0;
}