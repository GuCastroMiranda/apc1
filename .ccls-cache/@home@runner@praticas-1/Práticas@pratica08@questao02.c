#include <stdio.h>
#DEFINE LIMITE 10
int main() {

 float notas[LIMITE];
 float soma = 0.0f;


for(int i = 0; i < LIMITE; i++){
  printf("Entre com a nota do aluno %i: ", i + 1);
  int ok = scanf("%f", &notas [i]);
  getchar();
  soma = soma + notas[i];
}

  float media = soma 





  
  return 0;
}