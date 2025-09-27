#include <stdio.h>
#include <stdlib.h>

int main() {
  int i;

  srand(3); //Agora com srand!!!

  for(i=0; i<10; i++)
    printf("%d ", rand());

  printf("\n");

  return 0;
}
