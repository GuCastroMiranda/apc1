#include <stdio.h>
int main (){

#define LIMITE 10
float produtos[LIMITE][3];
float total = 0.0f;
for(int i = 0; i < LIMITE; i++){
printf("Quantidade do produto %i: ", i + 1);
int ok = scanf("%f", &produtos[i][0]);
getchar();

printf("Quantidade o preço produto %i: ", i +1);
ok = scanf("%f", &produtos[i][1]);
getchar();

produtos[i][2] = produtos[i][0] * produtos[i][1];

total = total + produtos[i][2];  

}
  for(int i=0; i<LIMITE; i++) {
    for(int j=0; j<3; j++){
      printf("%8.2f", produtos[i][j]);
    }
    printf("\n");
  }
printf("Total: %8.2f\n", total);
  
  return 0;
}