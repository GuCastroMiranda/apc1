// Faça um programa em C que leia uma tecla pressionada e determine se ela é uma letra, um numero ou um caractere especial.
#include <stdio.h>

int main() {
char tecla = 0;

printf("Aperte sua tecla: ");
scanf("%c", &tecla);

  if (tecla >= 48 && tecla <= 57) {
    printf("Voce pressionou um digito.\n");
} else if ((tecla >=65 && tecla <=90) || (tecla>=97 && tecla<=122)) {
    printf("Voce pressionou uma letra.\n");
} else {
  printf("Voce pressionou um caracter especial.\n");
}

return 0;
}