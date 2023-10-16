#include <stdio.h>
int main(){
 int nota = 0;
 int deu_certo = 0;
  
printf ("Digite sua nota de 1 a 5: ");
scanf("%i", &nota );
  
 //if (deu_certo){
// if (nota == 1) {
// printf("A nota do uber é: Ruim! :( ");
// }else if (nota == 2){
// printf ("A nota do uber é: Insuficiente! :/");
// }else if (nota == 3){
// printf ("A nota do uber é: Suficiente :|");
// }else if (nota == 4){
// printf("A nota do uber é: Boa! :)");
// }else if (nota == 5){
// printf("A nota do uber é: Ótima! :D");
// }
// }else {
// printf("Nota inválida! Tente novamente.\n");
// }

switch(nota){
  case 1: printf("A nota do uber é: Ruim! :( "); break;
  case 2: printf("A nota do uber é: Insuficiente! :/"); break;
  case 3: printf ("A nota do uber é: Suficiente :|"); break;
  case 4: printf("A nota do uber é: Boa! :)"); break;
  case 5: printf("A nota do uber é: Ótima! :D"); break;
  default: printf("Nota inválida! Tente novamente."); 
}


  
  return 0;
}