 #include <stdio.h>

int main () {
  int local = 5;
 int global = 10;

    printf("global = %i, local = %i\n", global, local);

    { 
    float local = 2.5f;
    printf("global = %i, local = %f\n", global, local);
      }
   // temp = 0; não existe //

    printf("global = %i, local = %i\n", global, local);


  return 0;
}