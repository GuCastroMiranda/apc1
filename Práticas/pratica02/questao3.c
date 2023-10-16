// Faça um programa em C que imprima um qualitativo associado a uma nota de uber lida conforme a tabela: 1 = Ruim; 2 = Insuficiente; 3 = Suficiente, 4 = Bom, 5 = Ótimo, e imprima Nota inválida nos demais casos.//
#include <stdio.h>
int main() {
char nota = 0;

  printf("Qual a nota do uber de 1 a 5? ");
  scanf("%d", &nota);

  switch(nota){
    case 1: printf("A nota do uber é ruim! :("); break;
    case 2: printf("A nota do uber é Insuficiente! :/"); break;
    case 3: printf("A nota do uber é Suficiente! :|"); break;
    case 4: printf("A nota do uber é Boa! :)"); break;
    case 5: printf("A nota do uber é Ótima! :D"); break;
    default: printf("Nota inválida! Pressione uma nota de 1 qa 5: ");
  }

      
  return 0;
}