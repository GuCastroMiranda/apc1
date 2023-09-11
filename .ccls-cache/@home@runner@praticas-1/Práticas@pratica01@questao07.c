//Faça um programa em C que calcule a altura alcançada por um avião após ter percorrido uma certa distância (seno(ângulo) = altura/distância). Considere o ângulo de inclinação do avião menor ou igual a 45°.//
#include <stdio.h>
#include <math.h>
int main() {

double distancia = 100;
double seno45 = 3.14159265 / 180;
double altura = sin(seno45) * distancia;

printf("a altura alcançada foi %d\n", altura);

  
  return 0;
}