#include <stdio.h>
#include "myfunction.h"


int main(void) {
  int nEst, retorno;
  
  printf("Digite o número de estrelas: ");
    scanf("%d", &nEst);

  retorno = carneirassos(nEst);
  
  printf("\n\n%d", retorno);
  
}