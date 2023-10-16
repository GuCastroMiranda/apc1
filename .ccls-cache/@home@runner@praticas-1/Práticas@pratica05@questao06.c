// todos os multiplos de 3 entre 1 e 100 //
#include <stdio.h>
int main() {

  printf("Multiplos de 3 entre 1 e 100:\n"); 
  
  for(int i = 0; i < 100; i = i+3) {
  if (i ==0) continue;  
    
 printf("%i, ", i);
  }

  printf("\n"); 

  
  return 0;
}