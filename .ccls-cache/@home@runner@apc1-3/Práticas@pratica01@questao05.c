// Faça um programa em C que converta um valor qualquer em Gigabytes para um valor em bytes (1GB = 1024³Bytes). //
#include <stdio.h>
int main(){
  float Gigabyte = 1;
  float Bytes = 1024 * 1024 * 1024;
  float resultado_em_bytes = Gigabyte * Bytes;

  printf("O valor de Gb é de %1.f\n", resultado_em_bytes);
  


  
  return 0;
}