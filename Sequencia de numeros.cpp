#include <stdio.h>
#include <stdlib.h>

int main ()
{
int n1,n2,n3; // variaveis do tipo int
printf("Digite um numero"); // mostrar uma mensagem na tela
scanf("%d",&n1); // armezenar o valor que o usuario digitou em n1
n2 = n1 +1; // n2 recebe o valor de n1 + 1
n3 = n2 +1; // n3 recebe o valor de n2  + 2
printf("\n sequencia \n %d,%d,%d",n1,n2,n3); // mostrar os valores de n1, n2 e n3
        system ("pause"); // dar uma pausa pro sistema 
     return 0 ; // retorna o int 
}
