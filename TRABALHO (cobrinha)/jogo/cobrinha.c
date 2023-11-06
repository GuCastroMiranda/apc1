#include <stdio.h>
int main(){
  
                       //MENU DO JOGO//
int escolha = 0;

do {  
 printf("🐍 Bem vindo ao jogo da cobrinha!🐍");
 printf("Selecione a opção desejada: ");
 printf("1- Iniciar Jogo!  ");
 printf("2- Sair.  ");
 scanf("%d", &escolha);
  
switch(escolha) {
  case 1: printf("Iniciando o jogo da cobrinha..."); break;
  case 2: printf("Saindo do jogo da cobrinha, volte logo!"); break;
  default: printf("Opção inválida, digite 1 para iniciar e 2 para sair!"); break;
    }
}  while (escolha != 2);
   
                    //DEFININDO POSIÇÃO (comida, paredes, cobrinha)//







  
return 0;
}