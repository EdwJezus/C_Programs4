#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main() {
  ///////Atividade 1
  printf("Atividade 01\n");
  printf("\n");
  
  int num, i, contador = 0;
  
  for(i=0; i<20; i = i+1){
    printf("Digite um valor: \n");
    scanf("%d", &num);

    if(num < 0){
    contador = contador + 1;
    }
  }

  printf("A quantidade de números negativos é %d\n", contador);

  ////////////////////////
///Atividade 2
  printf("\n");
  printf("Atividade 02\n");
  printf("\n");
  
  int p, quadrado;

  //for(p=15; p<200; p = p*p){
    //printf("%d\n", p);
    
  //}

  p = 14;
  while(p<200){
    p = p+1;
    printf("%d\n", p*p);
  }

////////////////////////
///Atividade 3
  printf("\n");
  printf("Atividade 03\n");
  printf("\n");
  
  
  
  
  
  return 0;
}
//Faça um programa que apresente os quadrados dos números inteiros de 15 a 200.
