#include <stdio.h>
int main (){
float peso = 0;
float altura = 0;

  
  printf("Entre com o peso: ");
  scanf("%f", &peso);
 getchar();

  while(altura < 1 ) {
  printf("Entre com a altura: ");
  scanf("%f", &altura);
 getchar();
  }
  
float imc = peso / (altura * altura);
printf("O IMC é : %.2f", imc);

  
  return 0;
}