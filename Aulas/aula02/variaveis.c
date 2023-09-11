#include <stdio.h>

int main() {
  char caracter = 0; // ou '\0' '\n', '\t' // 'a', 'b', 'c', -128 a 127 - 1 byte

  caracter = 'a';
  caracter = 'b';

  unsigned char caracter_sem_sinal // 0 a 255
  
  char i;
  char j;
  
  char string[10] = "um texto";
  
  int inteiro; // -2147483648 a 2147483647 - 4 bytes

  unsigned int inteiro_sem_sinal; // 0 a 4294967295

  short int inteiro_curto; // -32768 a 32767 - 2 bytes

  unsigned short int inteiro_curto_sem_sinal; // 0 a 65535

  long int inteiro_longo; // -9223372036854775808
  
  float flutuação; // 0.123456f - 4 bytes
  
  double duplo; // 0.123456789012345 - 8 bytes
  
  void vazio; // 1 byte
  
  return 0;
}