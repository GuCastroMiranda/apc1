//Faça um programa em C que calcule a altura alcançada por um avião após ter percorrido uma certa distância (seno(ângulo) = altura/distância). Considere o ângulo de inclinação do avião menor ou igual a 45°.//
#include <stdio.h>
#include <math.h>
int main() {

  // Qual o valor do angulo? //
  int angulo = 7;

  // Qual o valor do seno do angulo ? Parte necessária pois a funçao de seno de math.h é em radianos //
  double angulo_radianos = (angulo * M_PI) / 180;

  //Seno do angulo em radianos //
  double seno = sin(angulo_radianos);

  //Calculo da altura //
  double distancia = 100;
  
  double altura = seno * distancia;

  printf("a altura alcançada foi %lf metros \n", altura);

  
  return 0;
}