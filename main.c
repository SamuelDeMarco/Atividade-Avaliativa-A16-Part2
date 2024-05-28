#include <stdio.h>
#include "myfunction.h"


int main(void) {
  int nEst, retorno;
  
  printf("Digite o número de estrelas: ");
    scanf("%d", &nEst);

  while(nEst <= 0){
    printf("Número inválido! Digite o número de estrelas novamente: ");
    scanf("%d", &nEst);
  }

  retorno = carneirassos(nEst);
  
  printf("\n\n%d", retorno);
  
}