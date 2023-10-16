// Faça um programa em C que liste todos os múltiplos de 3, entre 1 e 100. //
#include <stdio.h>
int main(){

  printf("Os multiplos de 3 de 1 a 100 são: \n");
  // usaremos o comando -for- que faz um loop

 for (int i = 1; i <= 100; i++){
   if (i % 3 == 0){
     printf("%d\n", i);
   }
 }

  
  return 0;
}