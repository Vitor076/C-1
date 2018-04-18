#include <stdio.h>
#include <stdlib.h>

int main ()
{
int n1,n2,n3,n=0; // variaveis do tipo int
do{ // laço de repetição do 
printf("Digite um numero"); // mostrar uma mensagem na tela
scanf("%d",&n1); // armazenar o que o usuario digitou 
printf("Digite outro numero diferente do anterior");
scanf("%d",&n2);
printf("Digite outro numero diferente dos anteriores");
scanf("%d",&n3);
// Sistema de if encadiado para mostrar os 3 valores digitados pelo usuario em ordem crecente 
if (n1 < n2 && n1 < n3&& n2 < n3)
printf("\n em ordem crecente : \n %d,%d,%d",n1,n2,n3);
else if (n1 < n2 && n1 < n3&& n3 < n2)
printf("\n em ordem crecente : \n %d,%d,%d",n1,n3,n2);
else if (n2 < n1 && n1 < n3&& n2 < n3)
printf("\n em ordem crecente : \n %d,%d,%d",n2,n1,n3);
else if (n2 < n1 && n3 < n1&& n2 < n3)
printf("\n em ordem crecente : \n %d,%d,%d",n2,n3,n1);
else if (n2 < n1 && n3 < n1&& n2 < n3)
printf("\n em ordem crecente : \n %d,%d,%d",n2,n3,n1);
else if (n3 < n1 && n3 < n2&& n1 < n2)
printf("\n em ordem crecente : \n %d,%d,%d",n3,n1,n2);
else if (n3 < n1 && n3 < n2&& n2 < n1)
printf("\n em ordem crecente : \n %d,%d,%d",n3,n2,n1);
else
printf("Digite numeros diferentes");
  printf("\nDeseja continuar? <1-Sim> <2-Nao>");
    scanf("%d",&n); // armazena o valor da variavel n criada como condicional do laço
}while(n==1); // final do condicional utilizando a variavel n como controle

     return 0 ; // retorno do int main 
}



