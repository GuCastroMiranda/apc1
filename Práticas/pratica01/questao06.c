// Faça um programa em C que calcule as raízes de uma equação do 2° grau através da fórmula de Bhaskara (-b +/- raiz_quadrada(b² - 4ac)/2a). //

#include <stdio.h>
#include <math.h>
int main(){ 

  // Valores de A, B e C da equação //
  float a = 20;
  float b = 10;
  float c = 100;

  // Valores de delta //
    float delta = b * b - 4 * a * c;
  
  // As raízes existes? //
  if (delta < 0)
  printf("Não existem raízes reais. \n");
  else{
  
  // Bhaskara //
  float x1 = (- b + sqrt(delta)) / (2 * a);
  float x2 = (-b - sqrt(delta )) / (2 * a);

  // Resultado //
  printf("x1 e x2 são, respectivamente: %1f e %1f\n", x1, x2);
  }
return 0;
}