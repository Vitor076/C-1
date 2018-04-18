#include <stdio.h>
#include <stdlib.h>

int main ()
{
   float sal,sal1; // variaveis float
   int n=0; // variavel de controle n com o valor de 0
do{ //  inicio do laço do
	   system("cls"); // limpar a tela
	   printf("digite o salario do funcionario\n"); // mostrar uma mensagem na tela 
	   scanf("%f",&sal); // armazenar o valor digitado em sal 
if (sal>sal1) // se Sal maior que sal1
sal1 = sal; // Sal1 recebe o valor de Sal 
    printf("\nDeseja continuar? <1-Sim> <2-Nao>\n");
    scanf("%d",&n); // Armazena o valor digitado em n que ira repitir ou não o laço 
}while(n==1); // enquanto n for igual a 1 repita o laço 
printf("\n Maior salario %.2f\n",sal1);	 

	system ("pause");
     return 0 ;
 }
