// Faça um programa em C que calcule as raízes de uma equação do 2° grau através da fórmula de Bhaskara (-b +/- raiz_quadrada(b² - 4ac)/2a). //
#include <stdio.h>
#include <math.h>
int main() {
float a = 1;
float b = -2;
float c = -8;
float delta = pow(b, 2) - 4 * a * c;

float bhaskarax1 = (-b + sqrt(delta)) / 2 * a;
float bhaskarax2 = (-b - sqrt(delta)) / 2 * a;

    
if (delta < 0) {
  printf("As raízes reais nao existes");
}  
else { 
  printf("As raízes são: %f e %f\n", bhaskarax1, bhaskarax2);
}
 return 0;
}