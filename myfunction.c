#include <stdio.h>

int carneirassos(int nEst){

  int totCarn = 0, retorno;

  int nCarn [nEst+2];

  nCarn [0] = -1;
  nCarn [nEst + 1] = -1;

  for(int i = 1; i <= nEst; i++){
    printf("Digite o número de carneiros em estrela %d:  ", i);
      scanf("%d", &nCarn[i]);

    while ((nCarn[i] < 0) || (nCarn[i] > 20)) {
      printf("O número digitado é inválido!!!\n Digite um número maior ou igual a zero e menor que 20!");
        scanf("%d", &nCarn[i]);
    }
    totCarn = totCarn + nCarn[i];
  }

  int a = 1, nSitios = 1, carnRob = 0;
  while (nCarn[a] != -1){

    if (nCarn[a] != 0){

      if (nCarn[a] % 2){
        nCarn[a] = nCarn[a] -1;
        a ++;
        nSitios++;
        if(nCarn[a+1] == -1){
          nSitios--;
        }

      } else {
        nCarn[a] = nCarn[a] -1;
        a --;
      }
      carnRob += 1;
    } else {
      a --;
    }
  }

  retorno = totCarn;
  totCarn = totCarn - carnRob;

  printf("===================\n\n\" ");
  printf("Número de sitios: %d\n", nSitios);
  printf("\nNúmero de carneiros restantes: %d", totCarn);
  
  return retorno;
}