#include <stdio.h>
#include <stdlib.h>

int main ()
{
   float sal,sal1; // variaveis float
   int i,n,v=1; // variaveis int sendo n controle do for e v com o valor de 1
   
    printf("Digite o numero de funcinarios "); // mostrar uma mensagem na tela
   	scanf("%d",&i); // recebe o valor e armazena no i que vai ser utilizada para o limite do banco 
	   for (n=0;n < i; n++){ // inicio do for começando com 0 ate o valor < que N
	   v++; // variavel v + 1 Usanda para mostrar o numero de funcionarios 
	   printf("digite o salario do funcionario %d",v); // mostrando a mensagem na tela com o valor de v
	   scanf("%f",&sal); // armazena o valor em sal 
if (sal>sal1) // Se sal for maior que sal1 
sal1 = sal; // sal 1 recebe sal
} // assim temos o controle do maior salario
printf("\n Maior salario %f",sal1);	 
	system ("pause");
     return 0 ;
 }
